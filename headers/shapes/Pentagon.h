#ifndef _PENTAGON_
#define _PENTAGON_
#include "Shape.h"

class Pentagon : public Shape
{
private:
    Point p1;
    Point p2;

public:
    Pentagon(Point, Point);
    void render();
};

#endif