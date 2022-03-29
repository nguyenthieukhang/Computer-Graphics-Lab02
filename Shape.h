#ifndef _SHAPE_
#define _SHAPE_
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <cmath>
const int WIDTH = 200;
const int HEIGHT = 160;

class RGBColor
{
public:
    int r, g, b;
    RGBColor(int r, int g, int b)
    {
        this->r = r;
        this->g = g;
        this->b = b;
    }
    bool operator!=(const RGBColor o);
};

class Point
{
public:
    int x, y;
    Point();
    Point(int x, int y);
    int getx();
    int gety();
};

class Shape
{
private:
public:
    virtual void render() = 0;
};

#endif