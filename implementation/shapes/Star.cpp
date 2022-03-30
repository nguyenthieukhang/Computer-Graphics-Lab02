#include "../../headers/shapes/Star.h"
Star::Star(Point p1, Point p2)
{
    this->p1 = p1;
    this->p2 = p2;
}
void Star::render()
{
    double d = dist(p1, p2);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0 * d + p1.getx(), 0.2 * d + p1.gety(), 0.0);
    glVertex3f(0.1 * d + p1.getx(), 0.1 * d + p1.gety(), 0.0);
    glVertex3f(0.2 * d + p1.getx(), 0.05 * d + p1.gety(), 0.0);
    glVertex3f(0.1 * d + p1.getx(), 0.0 * d + p1.gety(), 0.0);
    glVertex3f(0.2 * d + p1.getx(), -0.1 * d + p1.gety(), 0.0);
    glVertex3f(0.0 + p1.getx(), 0.0 + p1.gety(), 0.0);
    glVertex3f(-0.2 * d + p1.getx(), -0.1 * d + p1.gety(), 0.0);
    glVertex3f(-0.1 * d + p1.getx(), 0.0 * d + p1.gety(), 0.0);
    glVertex3f(-0.2 * d + p1.getx(), 0.05 * d + p1.gety(), 0.0);
    glVertex3f(-0.1 * d + p1.getx(), 0.1 * d + p1.gety(), 0.0);
    glEnd();
    glFlush();
}