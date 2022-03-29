#ifndef _CIRCLE_
#define _CIRCLE_
#include "Shape.h"

class Circle : public Shape
{
private:
    Point center;
    double radius;

public:
    Circle(Point, Point);
    void render();
};

#endif