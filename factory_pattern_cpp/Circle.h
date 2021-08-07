#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle: public Shape {
    public:
        Circle():_d_size(1){}
        double getArea();
        int d_size();
    private: 
        int _d_size;
};
#endif


