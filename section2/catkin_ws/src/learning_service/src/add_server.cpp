#include <ros/ros.h>
#include <learning_service/Add.h>

bool CallBack(learning_service::Add::Request &req, learning_service::Add::Response &res);

int main(int argc, char** argv){
    ros::init(argc, argv, "add_server");
    ros::NodeHandle nh;
    ros::ServiceServer server = nh.advertiseService("add_service", CallBack);
    ROS_INFO("ready to add two number.");
    ros::spin();
    return 0;
}

bool CallBack(learning_service::Add::Request &req, learning_service::Add::Response &res){
    res.sum = req.a + req.b;
    ROS_INFO("request: x=%0.2f, y=%0.2f",req.a, req.b);
    ROS_INFO("the result is:%0.2f", res.sum);
    return true;
}