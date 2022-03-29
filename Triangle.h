#ifndef _TRIANGLE_
#define _TRIANGLE_
#include "Shape.h"

class Triangle : public Shape
{
private:
    Point p1;
    Point p2;

public:
    Triangle(Point, Point);
    void render();
};

#endif