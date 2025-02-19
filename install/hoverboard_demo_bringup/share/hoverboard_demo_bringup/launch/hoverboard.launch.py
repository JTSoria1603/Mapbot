# Copyright 2023 Robert Gruberski (Viola Robotics Sp. z o.o. Poland)
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

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
                    FindPackageShare("hoverboard_demo_description"), "urdf", "hoverboard_description.xacro"
                ]
            ),
        ]
    )
    robot_description = {"robot_description": robot_description_content}

    robot_controllers = PathJoinSubstitution(
        [
            FindPackageShare("hoverboard_demo_bringup"), "config", "hoverboard_controllers.yaml",
        ]
    )

    hardware_config = PathJoinSubstitution(
        [FindPackageShare("ros2-hoverboard-driver"), "config", "hardware.yaml"]
    )

    controllers_config = PathJoinSubstitution(
        [FindPackageShare("ros2-hoverboard-driver"), "config", "controllers.yaml"]
    )

   # rviz_config_file = PathJoinSubstitution(
   #     [
   #         FindPackageShare("hoverboard_demo_description"), "rviz", "hoverboard.rviz"
   #     ]
   # )

 

    control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[robot_description, robot_controllers],
    )

    robot_state_pub_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[robot_description],
    )

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster", "-c", "/controller_manager"],
    )

    robot_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["hoverboard_base_controller", "-c", "/controller_manager"]
    )

    ros_hoverboard_driver = Node(
        package='ros2-hoverboard-driver',
        executable='main',
        name='hoverboard_driver',
        output='screen',
        parameters=[hardware_config,controllers_config],  # Convertir rutas a strings
    )
    #rviz_node = Node(
    #    package="rviz2",
    #    executable="rviz2",
    #    name="rviz2",
    #    arguments=["-d", rviz_config_file],
    #)

    #joy_node = Node(
    #    package='joy', executable='joy_node', name='joy_node',
    #    parameters=[{
    #        'deadzone': 0.05,
    #        'autorepeat_rate': 30.0
    #    }],
    #)

 
    return LaunchDescription([
        control_node,
        robot_state_pub_node,
        joint_state_broadcaster_spawner,
        robot_controller_spawner,
        ros_hoverboard_driver,
        #rviz_node,
        #joy_node,
    ])
