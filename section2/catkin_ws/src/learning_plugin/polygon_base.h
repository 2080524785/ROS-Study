#ifdef PLUGINLIB_LEARNING__POLYGON_BASE_H_
#define PLUGINLIB_LEARNING__POLYGON_BASE_H_

namespace polygon_base{
    class RegularPolygon{
        public:
            virtual void initalize(double side_length) = 0;
            virtual double area() = 0;
            virtual ~RegularPolygon(){}
        protected:
            RegularPolygon(){}
    };
};

#endif