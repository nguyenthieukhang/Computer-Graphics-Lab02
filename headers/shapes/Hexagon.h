#ifndef _HEXAGON_
#define _HEXAGON_
#include "Shape.h"

class Hexagon : public Shape
{
private:
    Point p1;
    Point p2;

public:
    Hexagon(Point, Point);
    void render();
};

#endif