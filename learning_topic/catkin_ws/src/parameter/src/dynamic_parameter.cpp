#include "ros/ros.h"
#include <dynamic_reconfigure/server.h>
#include <parameter/TutorialsConfig.h>

void CallBack(parameter::TutorialsConfig &config, uint32_t level);

int main(int argc, char ** argv){
    ros::init(argc, argv, "dynamic_parameter");
    dynamic_reconfigure::Server<parameter::TutorialsConfig> server;
    dynamic_reconfigure::Server<parameter::TutorialsConfig>::CallbackType f;
    f = boost::bind(&CallBack, _1, _2);
    server.setCallback(f);
    ROS_INFO("Spinning node");
    ros::spin();
    return 0;
}
void CallBack(parameter::TutorialsConfig &config, uint32_t level){
    ROS_INFO("Reconfigure Request: %d %f %s %s %d",
             config.int_param,
             config.double_param,
             config.str_param.c_str(),
             config.bool_param ? "True" : "False",
             config.size);
}
