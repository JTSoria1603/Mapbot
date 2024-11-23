import cv2
import rclpy
from sensor_msgs.msg import Image
from rclpy.node import Node
from cv_bridge import CvBridge

class SubscriberNodeClass(Node):
    def __init__(self):
        super().__init__("subscriber_node")
        self.topicNameFrames = "topic_cam"
        self.bridgeObject = CvBridge()
        self.subscription = self.create_subscription(
            Image,
            self.topicNameFrames,
            self.listener_callback,
            10  # QoS Profile Depth
        )
        self.i = 0
        self.subscription  # Prevent unused variable warning

    def listener_callback(self, imageMessage):
        self.get_logger().info("Imagen recibida N°%d" %self.i)
        openCVImage = self.bridgeObject.imgmsg_to_cv2(imageMessage)
        cv2.imshow("CamVideo", openCVImage)
        cv2.waitKey(1)
        self.i += 1
    
def main(args=None):
    rclpy.init(args=args)
    subscriberNode = SubscriberNodeClass()
    rclpy.spin(subscriberNode)
    subscriberNode.destroy_node()
    rclpy.shutdown()

if __name__=="__main__":
    main()