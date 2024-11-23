import cv2
import rclpy
from sensor_msgs.msg import Image
from rclpy.node import Node
from cv_bridge import CvBridge

class PublisherNodeClass(Node):
    def __init__(self):
        super().__init__('publisher_node')
        self.cameraDeviceNumber = 0
        self.camera = cv2.VideoCapture(self.cameraDeviceNumber)
        self.bridgeObject = CvBridge()
        self.topicNameFrames = "topic_cam"
        self.queueSize = 20
        self.publisher_ = self.create_publisher(Image, self.topicNameFrames, self.queueSize)
        self.periodCommunication = 0.02
        self.timer = self.create_timer(self.periodCommunication, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        success, frame = self.camera.read()
        frame = cv2.resize(frame, (820, 640), interpolation=cv2.INTER_CUBIC)
        if success:
            ROS2ImageMessage = self.bridgeObject.cv2_to_imgmsg(frame)
            self.publisher_.publish(ROS2ImageMessage)
            self.get_logger().info("Publicando imagen N°%d" % self.i)
            self.i += 1
        else:
            self.get_logger().error('No se pudo capturar la imagen.')

def main(args=None):
    rclpy.init(args=args)
    publisherObject = PublisherNodeClass()
    rclpy.spin(publisherObject)
    publisherObject.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()