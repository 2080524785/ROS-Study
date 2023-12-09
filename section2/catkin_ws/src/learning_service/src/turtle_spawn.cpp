#include <ros/ros.h>
#include <turtlesim/Spawn.h>

int main(int argc, char** argv){
    ros::init(argc, argv, "turtle_spawn");
    ros::NodeHandle nh;
    ros::service::waitForService("/spawn");
    ros::ServiceClient client = nh.serviceClient<turtlesim::Spawn>("/spawn");
    turtlesim::Spawn srv;
    srv.request.x = 1;
    srv.request.y = 1;
    srv.request.name = "turtle2";
    ROS_INFO("Call service to spawn turtle [x:%0.6f y:%0.6f name:%s]",
             srv.request.x,
             srv.request.y,
             srv.request.name);
    client.call(srv);
    ROS_INFO("Spawn turtle successfully, new turtle name:%s", srv.response.name);
    return 0;
}