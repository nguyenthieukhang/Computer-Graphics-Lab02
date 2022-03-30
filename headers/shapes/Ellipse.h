#ifndef _ELLIPSE_
#define _ELLIPSE_
#include "Shape.h"

class Ellipse : public Shape
{
private:
    Point p1;
    Point p2;

public:
    Ellipse(Point, Point);
    void render();
};

#endif