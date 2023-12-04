#include <ros/ros.h>
#include "learning_topic/Student.h"

int main(int argc, char **argv){
    ros::init(argc, argv, "student_publisher");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<learning_topic::Student>("/student_info", 1000);
    ros::Rate r(1);
    int count = 0;
    while(ros::ok()){
        learning_topic::Student student_msg;
        student_msg.msg = "Xiaoming";
        student_msg.age = 18;
        student_msg.sex = learning_topic::Student::male;
        student_msg.height = 180;
        student_msg.weight = 160;
        pub.publish(student_msg);
        ROS_INFO("Publish Student Info: name:%s age:%d sex:%d height:%d weight:%d",
                 student_msg.msg.c_str(),
                 student_msg.age,
                 student_msg.sex,
                 student_msg.height,
                 student_msg.weight);
        ROS_INFO("Publish times are : [%d]", ++count);
        r.sleep();
    }
    return 0;
}