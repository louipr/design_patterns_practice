
#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include "Shape.h"

class ShapeFactory{
    public:
        enum class ShapeType { Rectangle, Square, Circle };
        ShapeFactory(){}
        Shape *getShape(ShapeType shapeType);
};
#endif