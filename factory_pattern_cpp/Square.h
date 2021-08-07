#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

class Square: public Shape {
    public:
        Square():_d_size(1){}
        double getArea();
        int d_size();
    private: 
        int _d_size;
};
#endif


