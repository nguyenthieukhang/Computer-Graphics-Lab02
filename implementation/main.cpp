#include <stdio.h>
#include <iostream>
#include "../headers/Factory.h"
#include "../headers/Painter.h"

#define SELECT 100002
#define COLOR 100003
#define EXIT 100004
#define NONE 100005
int mouseX1, mouseY1, mouseX2, mouseY2;
static bool isDrag = false;
// static bool drawing = false;
static int shapeChosen = NOSHAPE;
static int FLAG = NONE;
static int window;

void myMouse(int button, int state, int x, int y)
{
	// Save the left button state
	if (button == GLUT_LEFT_BUTTON and shapeChosen != NOSHAPE)
	{
		// Save the mouse position
		if (state == GLUT_DOWN)
		{
			mouseX1 = x;
			mouseY1 = HEIGHT - y;
			isDrag = true;
			// std::cout << "Down at" << x << " " << y << '\n';
		}
		else if (state == GLUT_UP and isDrag)
		{
			// std::cout << "Up at 65" << x << " " << y << '\n';
			mouseX2 = x;
			mouseY2 = HEIGHT - y;
			// std::cout << mouseX1 << " " << mouseY1 << " " << mouseX2 << " " << mouseY2 << std::endl;
			isDrag = false;
			if (shapeChosen != NOSHAPE)
			{
				Point p1 = Point(mouseX1, mouseY1);
				Point p2 = Point(mouseX2, mouseY2);
				Factory::createShape(shapeChosen, p1, p2);
				// std::cout << "The size of the factory is" << Factory::shapes.size() << '\n';
				shapeChosen = NOSHAPE;
			}
			// std::cout << "Up at" << x << " " << y << '\n';
		}
	}
	else if (button == GLUT_LEFT_BUTTON and (FLAG == RED or FLAG == GREEN or FLAG == BLUE))
	{
		mouseX1 = x;
		mouseY1 = HEIGHT - y;
		// Shape *shapePtr = Factory::getSelectedShape(Point(mouseX1, mouseX2));
		// shapePtr->colorize();
		colorize(mouseX1, mouseY1, FLAG);
		// if (FLAG == RED)
		// {
		// 	colorize(mouseX1, mouseY1, RGBColor(255, 0, 0));
		// }
		// else if (FLAG == GREEN)
		// {
		// 	colorize(mouseX1, mouseY1, RGBColor(0, 255, 0));
		// }
		// else
		// {
		// 	colorize(mouseX1, mouseY1, RGBColor(0, 0, 255));
		// }
		FLAG = NONE;
	}
}

void processDrawEvents(int code)
{
	switch (code)
	{
	case EXIT:
		glutDestroyWindow(window);
		exit(0);
		break;
	case LINE:
		// std::cout << "Draw a line\n";
		shapeChosen = LINE;
		break;
	case CIRCLE:
		shapeChosen = CIRCLE;
		break;
	case RECTANGLE:
		shapeChosen = RECTANGLE;
		break;
	case TRIANGLE:
		shapeChosen = TRIANGLE;
		break;
	case ELLIPSE:
		shapeChosen = ELLIPSE;
		break;
	case STAR:
		shapeChosen = STAR;
		break;
	case SQUARE:
		shapeChosen = SQUARE;
		break;
	case HEXAGON:
		shapeChosen = HEXAGON;
		break;
	case PENTAGON:
		shapeChosen = PENTAGON;
		break;
	default:
		return;
	}
}

void processMenuEventColors(int code)
{
	switch (code)
	{
	case RED:
		// std::cout << "red\n";
		FLAG = RED;
		break;
	case GREEN:
		// std::cout << "green\n";
		FLAG = GREEN;
		break;
	case BLUE:
		// std::cout << "blue\n";
		FLAG = BLUE;
		break;
	default:
		return;
	}
}

void createGLUTMenus()
{
	int submenuColor = glutCreateMenu(processMenuEventColors);
	glutAddMenuEntry("Red", RED);
	glutAddMenuEntry("Blue", BLUE);
	glutAddMenuEntry("Green", GREEN);

	int submenuPolygon = glutCreateMenu(processDrawEvents);
	glutAddMenuEntry("Hexagon", HEXAGON);
	glutAddMenuEntry("Pentagon", PENTAGON);

	int submenuOval = glutCreateMenu(processDrawEvents);
	glutAddMenuEntry("Circle", CIRCLE);
	glutAddMenuEntry("Ellipse", ELLIPSE);

	int submenuQuadrangle = glutCreateMenu(processDrawEvents);
	glutAddMenuEntry("Rectangle", RECTANGLE);
	glutAddMenuEntry("Square", SQUARE);

	int submenuDraw = glutCreateMenu(processDrawEvents);
	glutAddMenuEntry("Line", LINE);
	glutAddSubMenu("Quadrangle", submenuQuadrangle);
	glutAddSubMenu("Oval", submenuOval);
	glutAddSubMenu("Polygon", submenuPolygon);
	glutAddMenuEntry("Triangle", TRIANGLE);
	glutAddMenuEntry("Star", STAR);

	int mainmenu = glutCreateMenu(processDrawEvents);
	glutAddSubMenu("Draw", submenuDraw);
	glutAddSubMenu("Color", submenuColor);
	glutAddMenuEntry("Quit", EXIT);

	glutAttachMenu(GLUT_RIGHT_BUTTON);
}

void myInit()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(40.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, WIDTH, 0.0, HEIGHT);
}

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(0, 0, 0);
	glPointSize(1.0);
	// Draw here
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutInitWindowPosition(0, 0);
	window = glutCreateWindow("Lab 02: Computer Graphics - 19125051");
	glutDisplayFunc(myDisplay);
	glutMouseFunc(myMouse);
	createGLUTMenus();
	myInit();
	glutMainLoop();

	return 0;
}