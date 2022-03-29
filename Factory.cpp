#include "Factory.h"

void Factory::createShape(int shapeID, Point p1, Point p2)
{
    switch (shapeID)
    {
    case LINE:
        Factory::shapes.push_back(new Line(p1, p2));
        Factory::shapes.back()->render();
        break;
    case CIRCLE:
        Factory::shapes.push_back(new Circle(p1, p2));
        Factory::shapes.back()->render();
        break;
    case RECTANGLE:
        Factory::shapes.push_back(new Rectangle(p1, p2));
        Factory::shapes.back()->render();
        break;
    case TRIANGLE:
        Factory::shapes.push_back(new Triangle(p1, p2));
        Factory::shapes.back()->render();
        break;
    default:
        return;
    }
}
