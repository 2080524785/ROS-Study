## *********************************************************
##
## File autogenerated for the parameter package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'name': 'Default', 'type': '', 'state': True, 'cstate': 'true', 'id': 0, 'parent': 0, 'parameters': [{'name': 'int_param', 'type': 'int', 'default': 50, 'level': 0, 'description': 'An Integer parameter show', 'min': 0, 'max': 100, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'double_param', 'type': 'double', 'default': 5.0, 'level': 0, 'description': 'An double parameter show', 'min': 0.0, 'max': 10.0, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'str_param', 'type': 'str', 'default': 'Hello World', 'level': 0, 'description': 'An string parameter show', 'min': '', 'max': '', 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'std::string', 'cconsttype': 'const char * const'}, {'name': 'bool_param', 'type': 'bool', 'default': False, 'level': 0, 'description': 'An bool parameter show', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}, {'name': 'size', 'type': 'int', 'default': 1, 'level': 0, 'description': 'A size parameter which is edited via an enum', 'min': 0, 'max': 3, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': "{'enum': [{'name': 'Stop', 'type': 'int', 'value': 0, 'srcline': 11, 'srcfile': '/home/brave/soft/code/ROS-Study/section2/catkin_ws/src/parameter/cfg/Tutorials.cfg', 'description': 'A stop speed', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'Low_speed', 'type': 'int', 'value': 1, 'srcline': 12, 'srcfile': '/home/brave/soft/code/ROS-Study/section2/catkin_ws/src/parameter/cfg/Tutorials.cfg', 'description': 'A low drive speed', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'Medium_speed', 'type': 'int', 'value': 2, 'srcline': 13, 'srcfile': '/home/brave/soft/code/ROS-Study/section2/catkin_ws/src/parameter/cfg/Tutorials.cfg', 'description': 'A medium drive speed', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'Fast_speed', 'type': 'int', 'value': 3, 'srcline': 14, 'srcfile': '/home/brave/soft/code/ROS-Study/section2/catkin_ws/src/parameter/cfg/Tutorials.cfg', 'description': 'An fast drive speed', 'ctype': 'int', 'cconsttype': 'const int'}], 'enum_description': 'An enum to set size'}", 'ctype': 'int', 'cconsttype': 'const int'}], 'groups': [], 'srcline': 246, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'class': 'DEFAULT', 'parentclass': '', 'parentname': 'Default', 'field': 'default', 'upper': 'DEFAULT', 'lower': 'groups'}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

Tutorials_Stop = 0
Tutorials_Low_speed = 1
Tutorials_Medium_speed = 2
Tutorials_Fast_speed = 3
