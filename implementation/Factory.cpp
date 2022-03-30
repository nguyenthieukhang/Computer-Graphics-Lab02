#include "../headers/Factory.h"

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
    case ELLIPSE:
        Factory::shapes.push_back(new Ellipse(p1, p2));
        Factory::shapes.back()->render();
        break;
    case STAR:
        Factory::shapes.push_back(new Star(p1, p2));
        Factory::shapes.back()->render();
        break;
    case HEXAGON:
        Factory::shapes.push_back(new Hexagon(p1, p2));
        Factory::shapes.back()->render();
        break;
    case PENTAGON:
        Factory::shapes.push_back(new Pentagon(p1, p2));
        Factory::shapes.back()->render();
        break;
    case SQUARE:
        Factory::shapes.push_back(new Square(p1, p2));
        Factory::shapes.back()->render();
        break;
    default:
        return;
    }
}
