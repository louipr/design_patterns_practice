#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "ShapeFactory.h"

Shape * ShapeFactory::getShape(ShapeType shapeType){
    Shape * pShape = 0;
    switch (shapeType)
    {
        case ShapeType::Rectangle:
            pShape = new Rectangle();
            break;
        case ShapeType::Square:
            pShape = new Square();
            break;
        case ShapeType::Circle:
            pShape = new Circle();
            break;
        default:
            break; 
    }
    return pShape;
}