#include "Circle.h"

Circle::Circle(Point p1, Point p2)
{
    double dx = 1.0 * (p1.getx() - p2.getx()) * (p1.getx() - p2.getx());
    double dy = 1.0 * (p1.gety() - p2.gety()) * (p1.gety() - p2.gety());
    radius = sqrt(dx + dy);
    center = p1;
}

void Circle::render()
{
    int lineAmount = 100; //# of triangles used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2 * 3.141592;

    glBegin(GL_LINE_LOOP);
    for (int i = 0; i <= lineAmount; i++)
    {
        glVertex2f(
            center.getx() + (radius * cos(i * twicePi / lineAmount)),
            center.gety() + (radius * sin(i * twicePi / lineAmount)));
    }
    glEnd();
    glFlush();
}