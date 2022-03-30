#include "../../headers/shapes/Ellipse.h"

Ellipse::Ellipse(Point p1, Point p2)
{
    this->p1 = p1;
    this->p2 = p2;
}

void Ellipse::render()
{
    double XRadius = dist(p1, p2), YRadius = 1.618 * dist(p1, p2);

    const double PI = 3.14;
    glBegin(GL_LINE_STRIP);
    double Segments = 100.f;
    for (float angle = 0.0f; angle <= (2.0f * PI); angle += (2.f * PI / Segments))
    {
        double x = cos(angle) * XRadius;
        double y = sin(angle) * YRadius;
        glVertex3f(x + p1.getx(), y + p1.gety(), 0);
    }
    glEnd();
    glFlush();
}