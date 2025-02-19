from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    teleop_twist_key_config_file = PathJoinSubstitution(
        [
            FindPackageShare("hoverboard_demo_bringup"), "config", "key.config.yaml",
        ]
    )

    teleop_twist_key_node = Node(
        package='teleop_twist_keyboard',
        executable='teleop_twist_keyboard',
        name='teleop_twist_key_node',
        output='screen',
        parameters=[teleop_twist_key_config_file],
        remappings=[('/cmd_vel', '/hoverboard_base_controller/cmd_vel_unstamped')],
        prefix="xterm -e"
    )

    return LaunchDescription([
        teleop_twist_key_node,
    ])
