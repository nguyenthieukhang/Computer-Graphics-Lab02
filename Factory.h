#ifndef _FACTORY_
#define _FACTORY_
#include "Shape.h"
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <vector>
#include <utility>

// Define the macros for different shapes
#define NOSHAPE -100
#define CIRCLE 100
#define TRIANGLE 101
#define LINE 102
#define ELIPSE 103
#define RECTANGLE 104

class Factory
{
public:
    inline static std::vector<Shape *> shapes;
    static void createShape(int shapeID, Point p1, Point p2);
    static Shape *getSelectedShape(Point);
};

#endif