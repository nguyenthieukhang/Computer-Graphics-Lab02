#include "../../headers/shapes/Hexagon.h"

Hexagon::Hexagon(Point p1, Point p2)
{
    this->p1 = p1;
    this->p2 = p2;
}

void Hexagon::render()
{
    double d = dist(p1, p2);
    const double PI = 3.141592;
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 6; ++i)
    {
        glVertex2d(sin(i / 6.0 * 2 * PI) * d + p1.getx(),
                   cos(i / 6.0 * 2 * PI) * d + p1.gety());
    }
    glEnd();
    glFlush();
}