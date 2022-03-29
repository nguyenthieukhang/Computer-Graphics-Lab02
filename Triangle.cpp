#include "Triangle.h"

Triangle::Triangle(Point p1, Point p2)
{
    this->p1 = p1;
    this->p2 = p2;
}

void Triangle::render()
{
    glBegin(GL_LINE_LOOP);
    glVertex2f(p1.getx(), p1.gety());
    glVertex2f(p2.getx(), p2.gety());
    glVertex2f(p1.getx(), p2.gety());
    glEnd();
    glFlush();
}