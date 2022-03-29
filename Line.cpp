#include "Line.h"
#include <iostream>
Line::Line(Point _p1, Point _p2)
{
    p1 = _p1;
    p2 = _p2;
}

void Line::render()
{
    // std::cout << "Rendering a line\n";
    // std::cout << p1.getx() << " " << p1.gety() << ", " << p2.getx() << " " << p2.gety() << '\n';
    glBegin(GL_LINES);
    glVertex2f(p1.getx(), p1.gety());
    glVertex2f(p2.getx(), p2.gety());
    glEnd();
    glFlush();
}
