#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from moveit_msgs.action import ExecuteTrajectory
from moveit_msgs.srv import GetCartesianPath
from geometry_msgs.msg import Pose
import math
from roarm_msgs.srv import MoveToXYZ
from moveit_msgs.action import MoveGroup
from moveit_msgs.srv import GetPositionIK
from moveit_msgs.msg import (
    MotionPlanRequest,
    Constraints,
    JointConstraint,
    RobotState,
)
from geometry_msgs.msg import PoseStamped, Point, Quaternion
import threading


class MoveToXYZServer(Node):
    def __init__(self):
        super().__init__('xyz_control')
        self.cb_group = ReentrantCallbackGroup()

        self.move_action_client = ActionClient(
            self,
            MoveGroup,
            'move_action',
            callback_group=self.cb_group
        )
        self.get_logger().info('Waiting for move_group action server...')
        self.move_action_client.wait_for_server()
        self.get_logger().info('Connected to move_group')

        self.ik_client = self.create_client(
            GetPositionIK,
            'compute_ik',
            callback_group=self.cb_group
        )

        self.srv = self.create_service(
            MoveToXYZ,
            'move_to_xyz',
            self.handle_move_request,
            callback_group=self.cb_group
        )
        self.get_logger().info('Service /move_to_xyz ready')

    def solve_ik(self, x, y, z):
        pitch_values = [10, 20, 30, 40, 50, 60, 70, 80, 85, 90, 0, 120, 150, 180]

        # Base angle — the base joint needs to point at the object
        base_angle = math.atan2(y, x)

        # Distance in horizontal plane — this is what the arm sees in its own plane
        dist = math.sqrt(x * x + y * y)
        link1_x = dist
        link1_y = 0.0
        link1_z = z

        for pdeg in pitch_values:
            pitch = math.radians(pdeg)

            qw = math.cos(pitch / 2)
            qx = 0.0
            qy = math.sin(pitch / 2)
            qz = 0.0

            ik_request = GetPositionIK.Request()
            ik_request.ik_request.group_name = 'hand'
            ik_request.ik_request.pose_stamped = PoseStamped()
            ik_request.ik_request.pose_stamped.header.frame_id = 'link1'
            ik_request.ik_request.pose_stamped.pose.position = Point(
                x=link1_x, y=link1_y, z=link1_z
            )
            ik_request.ik_request.pose_stamped.pose.orientation = Quaternion(
                x=qx, y=qy, z=qz, w=qw
            )
            ik_request.ik_request.avoid_collisions = True

            event = threading.Event()
            future = self.ik_client.call_async(ik_request)
            future.add_done_callback(lambda f: event.set())
            event.wait()

            result = future.result()
            if result.error_code.val == 1:
                self.get_logger().info(f'IK SOLVED: pitch={pdeg}° base={math.degrees(base_angle):.1f}°')

                # Override the base joint with the correct angle
                names = list(result.solution.joint_state.name)
                positions = list(result.solution.joint_state.position)

                base_idx = names.index('base_link_to_link1')
                positions[base_idx] = base_angle

                result.solution.joint_state.position = positions
                return result

            self.get_logger().warn(f'FAILED: pitch={pdeg}°')

        return result

    def handle_move_request(self, request, response):
        self.get_logger().info(
            f'Received: x={request.x}, y={request.y}, z={request.z}'
        )

        ik_result = self.solve_ik(request.x, request.y, request.z)

        if ik_result.error_code.val != 1:
            response.success = False
            response.message = f'IK failed with error code: {ik_result.error_code.val}'
            self.get_logger().error(response.message)
            return response

        joint_names = ik_result.solution.joint_state.name
        joint_positions = ik_result.solution.joint_state.position

        self.get_logger().info(f'IK solution: {list(zip(joint_names, joint_positions))}')

        goal = MoveGroup.Goal()
        goal.request = MotionPlanRequest()
        goal.request.group_name = 'hand'
        goal.request.num_planning_attempts = 5
        goal.request.allowed_planning_time = 5.0
        goal.request.max_velocity_scaling_factor = 1.0
        goal.request.max_acceleration_scaling_factor = 1.0

        constraints = Constraints()
        for name, position in zip(joint_names, joint_positions):
            if name == 'link5_to_gripper_link':
                continue
            jc = JointConstraint()
            jc.joint_name = name
            jc.position = position
            jc.tolerance_above = 0.01
            jc.tolerance_below = 0.01
            jc.weight = 1.0
            constraints.joint_constraints.append(jc)

        goal.request.goal_constraints.append(constraints)

        goal.planning_options.plan_only = False
        goal.planning_options.replan = True
        goal.planning_options.replan_attempts = 3

        event = threading.Event()
        future = self.move_action_client.send_goal_async(goal)
        future.add_done_callback(lambda f: event.set())
        event.wait()

        goal_handle = future.result()
        if not goal_handle.accepted:
            response.success = False
            response.message = 'Goal rejected by move_group'
            self.get_logger().error(response.message)
            return response

        self.get_logger().info('Goal accepted, executing...')

        event = threading.Event()
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(lambda f: event.set())
        event.wait()

        result = result_future.result().result
        if result.error_code.val == 1:
            response.success = True
            response.message = f'Moved to ({request.x}, {request.y}, {request.z})'
            self.get_logger().info(response.message)
        else:
            response.success = False
            response.message = f'Planning failed with error code: {result.error_code.val}'
            self.get_logger().error(response.message)

        return response


def main(args=None):
    rclpy.init(args=args)
    node = MoveToXYZServer()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    executor.spin()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()