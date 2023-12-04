#include <ros/ros.h>
#include <learning_topic/Student.h>

int count = 0;

void CallBack(const learning_topic::Student::ConstPtr& msg){
    ROS_INFO("Subscribe Student Info : name:%s age:%d sex:%d height:%d weight:%d",
             msg->msg.c_str(),
             msg->age,
             msg->sex,
             msg->height,
             msg->weight);
    ROS_INFO("Subscribe times are : [%d]", ++count);
}

int main(int argc, char** argv){
    ros::init(argc, argv, "student_subscriber");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("/student_info", 1000, CallBack);
    ros::spin();
    return 0;
}