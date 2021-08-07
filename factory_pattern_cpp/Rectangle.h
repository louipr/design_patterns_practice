#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle: public Shape {
    public:
        Rectangle():_d_size(2){}
        double getArea();
        int d_size();
    private: 
        int _d_size;
};
#endif


