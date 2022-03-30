#!/bin/bash

g++-9 -std=c++17 -o release implementation/main.cpp headers/shapes/Pentagon.h implementation/shapes/Pentagon.cpp headers/shapes/Hexagon.h implementation/shapes/Hexagon.cpp headers/shapes/Square.h implementation/shapes/Square.cpp headers/shapes/Star.h implementation/shapes/Star.cpp headers/shapes/Ellipse.h implementation/shapes/Ellipse.cpp headers/shapes/Triangle.h implementation/shapes/Triangle.cpp headers/shapes/Rectangle.h implementation/shapes/Rectangle.cpp headers/shapes/Circle.h implementation/shapes/Circle.cpp headers/Painter.h implementation/Painter.cpp headers/Factory.h implementation/Factory.cpp headers/shapes/Shape.h implementation/shapes/Shape.cpp headers/shapes/Line.h implementation/shapes/Line.cpp -L/System/Library/Frameworks -framework GLUT -framework OpenGL