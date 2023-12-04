#include<ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <std_srvs/Trigger.h>

bool CommandCallBack(std_srvs::Trigger::Request &req, std_srvs::Trigger::Response &res);

int main(int argc, char** argv){
    ros::init(argc, argv, "turtle_vel_cmd");
    ros::NodeHandle nh;
    ros::ServiceServer server = nh.advertiseService("/turtle_cmd", CommandCallBack);
    ros::Publisher turtle_pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel");
    ROS_INFO("Ready to receive turtle velocity commadn.");
    geometry_msgs::Twist vel_msg;
    vel_msg.linear.x = 1;
    vel_msg.angular.x = 1;

    ros::Rate r(10);
    while (ros::ok()){
        ros::spinOnce();
        if()
    }
}