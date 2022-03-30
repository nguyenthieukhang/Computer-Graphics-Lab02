#ifndef _STAR_
#define _STAR_
#include "Shape.h"

class Star : public Shape
{
private:
    Point p1;
    Point p2;

public:
    Star(Point, Point);
    void render();
};

#endif