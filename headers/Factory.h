#ifndef _FACTORY_
#define _FACTORY_
#include "shapes/Shape.h"
#include "shapes/Line.h"
#include "shapes/Circle.h"
#include "shapes/Rectangle.h"
#include "shapes/Triangle.h"
#include "shapes/Ellipse.h"
#include "shapes/Star.h"
#include "shapes/Square.h"
#include "shapes/Hexagon.h"
#include "shapes/Pentagon.h"
#include <vector>
#include <utility>

// Define the macros for different shapes
#define NOSHAPE -100
#define CIRCLE 100
#define TRIANGLE 101
#define LINE 102
#define ELLIPSE 103
#define RECTANGLE 104
#define STAR 105
#define HEXAGON 106
#define PENTAGON 107
#define SQUARE 108

class Factory
{
public:
    inline static std::vector<Shape *> shapes;
    static void createShape(int shapeID, Point p1, Point p2);
    static Shape *getSelectedShape(Point);
};

#endif