#ifndef _LINE_
#define _LINE_
#include "Shape.h"

class Line : public Shape
{
private:
    Point p1;
    Point p2;

public:
    Line(Point, Point);
    void render();
};

#endif