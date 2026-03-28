import os
import yaml
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command
from ament_index_python.packages import get_package_share_directory


def load_yaml(package_name, file_path):
    full_path = os.path.join(get_package_share_directory(package_name), file_path)
    with open(full_path, 'r') as f:
        return yaml.safe_load(f)


def generate_launch_description():
    moveit_config_dir = get_package_share_directory('roarm_moveit_config')

    # 1. Robot description — URDF + ros2_control
    xacro_file = os.path.join(moveit_config_dir, 'config', 'roarm_m3.urdf.xacro')
    robot_description = {'robot_description': ParameterValue(
        Command(['xacro ', xacro_file]), value_type=str
    )}

    # 2. SRDF
    srdf_file = os.path.join(moveit_config_dir, 'config', 'roarm_m3.srdf')
    with open(srdf_file, 'r') as f:
        robot_description_semantic = {'robot_description_semantic': f.read()}

    # 3. Kinematics
    kinematics_yaml = load_yaml('roarm_moveit_config', 'config/kinematics.yaml')
    robot_description_kinematics = {'robot_description_kinematics': kinematics_yaml}

    # 4. Joint limits
    joint_limits_yaml = load_yaml('roarm_moveit_config', 'config/joint_limits.yaml')
    sensors_3d_yaml = load_yaml('roarm_moveit_config', 'config/sensors_3d.yaml')
    ompl_planning_yaml = load_yaml('roarm_moveit_config', 'config/ompl_planning.yaml')
    planning_pipelines = {
        'planning_pipelines': ['ompl'],
        'default_planning_pipeline': 'ompl',
        'ompl': ompl_planning_yaml,
    }
    # 5. MoveIt controllers
    moveit_controllers_yaml = load_yaml('roarm_moveit_config', 'config/moveit_controllers.yaml')

    # 6. ros2_controllers config path
    ros2_controllers_file = os.path.join(moveit_config_dir, 'config', 'ros2_controllers.yaml')

    # --- Nodes ---

    # Robot State Publisher — broadcasts TF from URDF + joint states
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[robot_description],
    )

    # ros2_control node — runs the fake hardware
    ros2_control_node = Node(
        package='controller_manager',
        executable='ros2_control_node',
        parameters=[ros2_controllers_file],
        remappings=[
            ('/controller_manager/robot_description', '/robot_description'),
        ],
        output='screen',
    )

    # Spawn controllers
    joint_state_broadcaster_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['joint_state_broadcaster'],
        output='screen',
    )

    hand_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['hand_controller'],
        output='screen',
    )

    gripper_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['gripper_controller'],
        output='screen',
    )

    # MoveIt2 Move Group — the brain
    move_group_node = Node(
        package='moveit_ros_move_group',
        executable='move_group',
        output='screen',
        parameters=[
            robot_description,
            robot_description_semantic,
            robot_description_kinematics,
            {'robot_description_planning': joint_limits_yaml},
            moveit_controllers_yaml,
            sensors_3d_yaml,
            planning_pipelines,
            {'use_sim_time': False},
        ],
    )

    # RViz
    rviz_config = os.path.join(moveit_config_dir, 'config', 'moveit.rviz')
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        output='screen',
        arguments=['-d', rviz_config],
        parameters=[
            robot_description,
            robot_description_semantic,
            robot_description_kinematics,
            planning_pipelines,
        ],
    )

    return LaunchDescription([
        robot_state_publisher,
        ros2_control_node,
        joint_state_broadcaster_spawner,
        hand_controller_spawner,
        gripper_controller_spawner,
        move_group_node,
        rviz_node,
    ])