#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

int count = 0;
void velCallBack(const geometry_msgs::Twist::ConstPtr& msg){
    ROS_INFO("Turtle vel : [%0.6f, %0.6f, %0.6f] [%0.6f, %0.6f, %0.6f]",
             msg->linear.x,
             msg->linear.y,
             msg->linear.z,
             msg->angular.x,
             msg->angular.y,
             msg->angular.z);
    ROS_INFO("Subscriber times are: [%d]", ++count);
}
int main(int argc, char **argv){
    ros::init(argc, argv, "turtle_subscribe");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("/turtle1/cmd_vel", 1000, velCallBack);
    ros::spin();
    return 0;
}