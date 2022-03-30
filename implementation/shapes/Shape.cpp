#include "../../headers/shapes/Shape.h"

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

double dist(Point p1, Point p2)
{
    double dx = 1.0 * (p1.getx() - p2.getx()) * (p1.getx() - p2.getx());
    double dy = 1.0 * (p1.gety() - p2.gety()) * (p1.gety() - p2.gety());
    return sqrt(dx + dy);
}

// void Shape::render()
// {
// }
// Point Shape::getCenter() { return Point(); }