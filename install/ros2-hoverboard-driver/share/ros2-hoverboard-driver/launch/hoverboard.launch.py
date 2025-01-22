import launch
from launch import LaunchDescription
from launch.actions import LogInfo
from launch_ros.actions import Node
from launch_ros.parameters_type import Parameters

def generate_launch_description():
    return LaunchDescription([
        # Cargar los parámetros desde archivos YAML
        Node(
            package='ros2-hoverboard-driver',
            executable='main',
            name='hoverboard_driver',
            output='screen',
            parameters=[
                {'hardware': '/home/tomy/mapbot_ws/src/ros2-hoverboard-driver/config/hardware.yaml'},
                {'controllers': '/home/tomy/mapbot_ws/src/ros2-hoverboard-driver/config/controllers.yaml'}
            ],
        ),
        # Cargar el controlador de la junta
        Node(
            package='controller_manager',
            executable='spawner',
            name='controller_spawner',
            output='screen',
            arguments=['hoverboard_joint_publisher', 'hoverboard_velocity_controller'],
        ),
    ])

