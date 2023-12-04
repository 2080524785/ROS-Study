#include <iostream>
#include <ros/ros.h>

int main(int argc, char **argv)
{
    int red, green, blue;
    // init
    ros::init(argc, argv, "param_config"); // param 3 : Node Name
    // craete Nodehandle
    ros::NodeHandle nh;

    bool get1 = ros::param::get("/turtlesim/background_r", red);
    bool get2 = nh.getParam("/turtlesim/background_g", green);
    bool get3 = nh.param("/turtlesim/background_b", blue, 100); // if not get , blue = 100

    if (get1 && get2 && get3)
    {
        ROS_INFO("Get BackGround Color[%d, %d, %d]", red, green, blue);
    }
    else
    {
        ROS_ERROR("Get Params Fialed");
    }
    ros::param::set("/turtlesim/background_r", 255);
    ros::param::set("/turtlesim/background_g", 255);
    nh.setParam("/turtlesim/background_b", 255);
    ROS_INFO("Set BackGround Color[255, 255, 255]");

    if (ros::param::get("/turtlesim/background_r", red))
    {
        ROS_INFO("Get Red Color is %d", red);
    }
    else
    {
        ROS_WARN("Failed to get Red Color");
    }
    if (ros::param::get("/turtlesim/background_g", green))
    {
        ROS_INFO("Get green Color is %d", green);
    }
    else
    {
        ROS_WARN("Failed to get green Color");
    }
    if (ros::param::get("/turtlesim/background_b", blue))
    {
        ROS_INFO("Get blue Color is %d", blue);
    }
    else
    {
        ROS_WARN("Failed to get blue Color");
    }

    bool delete1 = ros::param::del("/turtlesim/background_r");
    bool delete2 = nh.deleteParam("/turtlesim/background_b");
    if (delete1)
    {
        ROS_INFO("Delete red color success");
    }
    else
    {
        ROS_WARN("Delete red color failed");
    }
    if (delete2)
    {
        ROS_INFO("Delete blue color success");
    }
    else
    {
        ROS_WARN("Delete blue color failed");
    }
    bool has1 = ros::param::has("/turtlesim/background_r");
    bool has2 = nh.hasParam("/turtlesim/background_b");
    if (has1)
    {
        ROS_INFO("red color param exist");
    }
    else
    {
        ROS_INFO("red color param delete");
    }
    if (has2)
    {
        ROS_INFO("blue color param exist");
    }
    else
    {
        ROS_INFO("blue color param delete");
    }
    sleep(1);
    return 0;
}