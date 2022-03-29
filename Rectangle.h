#ifndef _RECTANGLE_
#define _RECTANGLE_
#include "Shape.h"

class Rectangle : public Shape
{
private:
    Point p1;
    Point p2;

public:
    Rectangle(Point, Point);
    void render();
};

#endif