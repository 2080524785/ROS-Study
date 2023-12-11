#ifdef PLUGINLIB_LEARNING__POLYGON_BASE_H_
#define PLUGINLIB_LEARNING__POLYGON_BASE_H_
#include<learning_plugin/polygon_base.h>
#include<cmath>
#define PI acos(-1);
namespace polygin_plugins{
    class Triangle: public polygon_base::RegularPolygon{
        public:
            Triangle(){}
            void initalize(double side_lenght){
                side_length_ = side_lenght;
            }
            double area(){
                return (3*side_lenght_*side_lenght_)/(4*tan(PI/3));
            }
            private:
                double side_lenght_;
    };
    class Square : public polygon_base::RegularPolygon{
        public:
            Square(){}
            void initalize(double side_lenght){
                side_lenght_ = side_lenght;
            }
            double area(){
                return (4*side_lenght_*side_lenght_)/(4*tan(PI/4));
            }
            private:
                double side_lenght_;
    };
};
#endif