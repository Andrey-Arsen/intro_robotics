import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
import time

class RoArmMover(Node):
    def __init__(self):
        super().__init__('roarm_mover')
        self.publisher = self.create_publisher(JointTrajectory, '/joint_trajectory_controller/joint_trajectory', 10)
        time.sleep(1)  # Даем время на инициализацию

    def move_to(self, positions, duration=2.0):
        msg = JointTrajectory()
        msg.joint_names = ['joint1', 'joint2', 'joint3', 'joint4', 'joint5']
        point = JointTrajectoryPoint()
        point.positions = positions
        point.time_from_start = rclpy.duration.Duration(seconds=duration).to_msg()
        msg.points.append(point)
        
        self.publisher.publish(msg)
        self.get_logger().info(f'Moving to positions: {positions}')
        return duration  # Возвращаем значение duration


def main():
    rclpy.init()
    mover = RoArmMover()
    
    # Укажите координаты суставов
    target_positions = [0.0, 0.5, -0.5, 0.2, 0.0]  # Пример координат
    duration = mover.move_to(target_positions)  # Получаем значение duration
    
    rclpy.spin_once(mover, timeout_sec=duration)
    mover.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
