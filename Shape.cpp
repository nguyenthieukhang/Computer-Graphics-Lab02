#include "Shape.h"

Point::Point() {}

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}
int Point::getx()
{
    return this->x;
}

int Point::gety()
{
    return this->y;
}

bool RGBColor::operator!=(const RGBColor o)
{
    return r != o.r or g != o.g or b != o.b;
}

// void Shape::render()
// {
// }
// Point Shape::getCenter() { return Point(); }