import launch
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command, FindExecutable, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():

    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [
                    FindPackageShare("ros2-hoverboard-driver"), "xacro", "robot.urdf.xacro"
                ]
            ),
        ]
    )
    
    robot_description = {"robot_description": robot_description_content}

    # Definir rutas a los archivos YAML
    hardware_config = PathJoinSubstitution(
        [FindPackageShare("ros2-hoverboard-driver"), "config", "hardware.yaml"]
    )

    controllers_config = PathJoinSubstitution(
        [FindPackageShare("ros2-hoverboard-driver"), "config", "controllers.yaml"]
    )

    control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[robot_description,controllers_config],
        output="screen",
    )

    robot_state_pub_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="screen",  
        parameters=[robot_description],
    )

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster", "-c", "/controller_manager"],
        output="screen",
    )

    robot_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["hoverboard_base_controller", "-c", "/controller_manager"],
        output="screen",
    )

    ros_hoverboard_driver = Node(
        package='ros2-hoverboard-driver',
        executable='main',
        name='hoverboard_driver',
        output='screen',
        parameters=[hardware_config,controllers_config],  # Convertir rutas a strings
    )

    return LaunchDescription([
        control_node,  
        robot_state_pub_node,  
        joint_state_broadcaster_spawner,  
        robot_controller_spawner,  
        ros_hoverboard_driver,  
    ])