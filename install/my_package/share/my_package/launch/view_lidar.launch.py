import os

from launch import LaunchDescription    
from launch_ros.actions import Node

def generate_launch_description():

    rviz_config_dir_file = "/home/master/Desktop/Mapbot/src/my_package/config/lidarconfig.rviz"

    return LaunchDescription([
        
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_config_dir_file],
            output='screen'
        ),
    ])
  