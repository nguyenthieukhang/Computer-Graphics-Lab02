#include "../../headers/shapes/Rectangle.h"

Rectangle::Rectangle(Point p1, Point p2)
{
    this->p1 = p1;
    this->p2 = p2;
}

void Rectangle::render()
{
    int x1 = p1.getx(), y1 = p1.gety(), x2 = p2.getx(), y2 = p2.gety();
    glBegin(GL_LINE_LOOP);
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x2, y2);
    glVertex2f(x1, y2);
    glEnd();
    glFlush();
}