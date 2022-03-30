#include "../../headers/shapes/Square.h"
Square::Square(Point p1, Point p2)
{
    this->p1 = p1;
    this->p2 = p2;
}

void Square::render()
{
    double d = fabs(p1.getx() - p2.getx());
    double x1 = p1.getx(),
           y1 = p1.gety(), x2 = p1.getx() + d, y2 = p1.gety() + d;
    glBegin(GL_LINE_LOOP);
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x2, y2);
    glVertex2f(x1, y2);
    glEnd();
    glFlush();
}