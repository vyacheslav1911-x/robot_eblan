import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
import serial
import json
import math

class RoArmDriver(Node):
    def __init__(self):
        super().__init__('roarm_driver')
        self.declare_parameter('serial_port', '/dev/ttyUSB0')
        self.declare_parameter('baud_rate',115200)

        port = self.get_parameter('serial_port').value
        baud = self.get_parameter('baud_rate').value

        try:
            self.ser = serial.Serial(port, baud, timeout =1)
            self.ser.setRTS(False)
            self.ser.setDTR(False)
            self.get_logger().info(f"Conncted on {port} at {baud}")
        except serial.SerialException as e:
                self.get_logger().error(f'Failed to open {port}: {e}')
                raise

        self.joint_map = {
                'base_link_to_link1': 'b',
                'link1_to_link2': 's',
                'link2_to_link3': 'e',
                'link3_to_link4': 't',
                'link4_to_link5': 'r',
                'link5_to_gripper_link': 'h', # gripper
            }
        self.joint_offsets = {
            'base_link_to_link1': 0.0,
            'link1_to_link2': 0.0,
            'link2_to_link3': 0.0,
            'link3_to_link4': 0.0,
            'link4_to_link5': 0.0,
            'link5_to_gripper_link': 1.5,
            }
        self.joint_directions = {
            'base_link_to_link1': 1.0,
            'link1_to_link2': 1.0,
            'link2_to_link3': 1.0,
            'link3_to_link4': 1.0,
            'link4_to_link5': 1.0,
            'link5_to_gripper_link': 1.0
            }
        self.last_send_time = self.get_clock().now()
        self.send_interval = 0.05

        self.last_sent = {}
        self.subscription = self.create_subscription(
            JointState,
            '/joint_states',
        self.joint_states_callback,
            10)
        self.get_logger().info('Driver running. Subscribed to /joint_states')
    def joint_states_callback(self, msg):
        now = self.get_clock().now()
        dt = (now - self.last_send_time).nanoseconds / 1e9
        if dt < self.send_interval:
            return
        self.last_send_time = now
        joint_angles = dict(zip(msg.name, msg.position))

        cmd = {'T':122}
        changed =False

        for urdf_name, json_key in self.joint_map.items():
            if urdf_name not in joint_angles:
                continue
            radians = joint_angles[urdf_name]
            radians = self.joint_directions[urdf_name] * radians
            radians = radians + self.joint_offsets[urdf_name]

            degrees = math.degrees(radians)
            degrees = round(degrees, 2)
            cmd[json_key] = degrees
            if self.last_sent.get(urdf_name) != degrees:
                changed = True
        if not changed:
            return 
        cmd['spd'] = 10
        cmd['acc'] = 10

        cmd_str = json.dumps(cmd) + '\n'
        self.ser.write(cmd_str.encode())
        self.get_logger().debug(f'Sent: {cmd_str.strip()}')
        
        for urdf_name, json_key in self.joint_map.items():
            if json_key in cmd:
                self.last_sent[urdf_name] = cmd[json_key]
    def destroy_node(self):
        if hasattr(self, 'ser') and self.ser.is_open:
            self.ser.close()
            self.get_logger().info('Serial port closed')
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = RoArmDriver()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

