#ifndef _PAINTER_
#define _PAINTER_
#include "shapes/Shape.h"
#include <queue>
#include <stack>
#include <iostream>

#define RED 1000
#define GREEN 1001
#define BLUE 1002

const RGBColor black = RGBColor(0, 0, 0);
const RGBColor white = RGBColor(255, 255, 255);
const RGBColor red = RGBColor(255, 0, 0);
const RGBColor green = RGBColor(0, 255, 0);
const RGBColor blue = RGBColor(0, 0, 255);

bool valid(Point p, RGBColor color);

RGBColor getColorAtPixel(int x, int y);

void putPixel(Point p, RGBColor color);

void colorize(int mouseX1, int mouseY1, int color);

#endif