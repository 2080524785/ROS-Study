#include<pluginlib/class_list_macros.h>
#include<learning_plugin/polygon_base.h>
#include<learning_plugin/polygon_plugins.h>
PLUGINLIB_EXPORT_CLASS(polygon_plugins::Triangle, polygon_base::RegularPolygon)
PLUGINLIB_EXPORT_CLASS(polygon_plugins::Square, polygon_base::RegularPolygon)

