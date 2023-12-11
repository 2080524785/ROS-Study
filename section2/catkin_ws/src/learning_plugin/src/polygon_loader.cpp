#include<pluginlib/class_loader.h>
#include<learning_plugin/polygon_base.h>

int main(int argc,char** argv){
    pluginlib::ClassLoader<polygon_base::RegularPolygon> poly_loader("learning_plugin", "polygon_base::RegularPolygon");
    try{
        boost::shared_ptr<polygon_base::RegularPolygon> triangle = poly_loader.createInstance("polygon_plugins::Triangle");
        triangle->initalize(10.0);
        boost::shared_ptr<polygon_base::RegularPolygon> square = poly_loader.createInstance("polygon_plugins::Square");
        square->initalize(10.0);
        ROS_INFO("Tirangle area is %.2f", triangel->area());
        ROS_INFO("Square area is %.2f", square->area());

    }
    catch(pluginlib::PluginlibException& ex){
        ROS_ERROR("The plugin failed to load for some resson. Error: %s", ex.waht());
    }
    return 0;
}