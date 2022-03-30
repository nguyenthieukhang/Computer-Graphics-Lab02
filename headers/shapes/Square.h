#ifndef _SQUARE_
#define _SQUARE_
#include "Shape.h"

class Square : public Shape
{
private:
    Point p1;
    Point p2;

public:
    Square(Point, Point);
    void render();
};

#endif