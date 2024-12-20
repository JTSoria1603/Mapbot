import os

from launch import LaunchDescription    
from launch_ros.actions import Node

def generate_launch_description():
    
    return LaunchDescription([
        
        Node(
            name = "lidar_node",
            package="rplidar_ros",
            executable="rplidar_composition",
            output="screen",
            parameters=[{
                "serial_port": "/dev/ttyUSB0",
                "frame_id": "laser",
                "serial_baudrate": 115200,
                "inverted": False,
                "scan_mode": "Standard",
                "angle_compensate": True,
            }],
        ),
    ])
