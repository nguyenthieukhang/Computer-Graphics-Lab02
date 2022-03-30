#include "../headers/Painter.h"

void putPixel(Point p, RGBColor color)
{
    glColor3ub(color.r, color.g, color.b);
    glBegin(GL_POINTS);
    glVertex2i(p.getx(), p.gety());
    glEnd();
    glColor3ub(0, 0, 0);
    glFlush();
    // glFlush();
    // if (color != getColorAtPixel(p.getx(), p.gety()))
    // {
    //     std::cout << "jsahfkjhfjhdklahvkladnfknsdnknmfsldmvskdvklnksdnvkkdv\n";
    // }
}

bool valid(Point p, RGBColor color)
{
    // std::cout << "color = "
    //           << "[" << color.r << ", " << color.g << ", " << color.b << "\n";
    int x = p.getx(), y = p.gety();
    RGBColor curColor = getColorAtPixel(p.getx(), p.gety());
    // std::cout << "curcolor = "
    //           << "[" << curColor.r << ", " << curColor.g << ", " << curColor.b << "\n";
    return x >= 0 and x <= WIDTH and y >= 0 and y <= HEIGHT and color != curColor and curColor != black;
}

RGBColor getColorAtPixel(int x, int y)
{
    unsigned char *ptr = new unsigned char[3];
    glReadPixels(x, y, 1, 1, GL_RGB, GL_UNSIGNED_BYTE, ptr);
    return RGBColor(ptr[0], ptr[1], ptr[2]);
}

void colorize(int mouseX1, int mouseY1, int color)
{
    RGBColor colorToPaint = RGBColor(0, 0, 0);
    if (color == RED)
    {
        colorToPaint = red;
    }
    else if (color == GREEN)
    {
        colorToPaint = green;
    }
    else
    {
        colorToPaint = blue;
    }
    std::queue<Point> q;
    std::stack<Point> st;
    st.push(Point(mouseX1, mouseY1));
    while (!st.empty())
    {
        Point cur = st.top();
        // std::cout << "[" << cur.getx() << " " << cur.gety() << "]\n";
        st.pop();
        putPixel(cur, colorToPaint);

        if (valid(Point(cur.getx() - 1, cur.gety()), colorToPaint))
        {
            st.push(Point(cur.getx() - 1, cur.gety()));
        }
        if (valid(Point(cur.getx() + 1, cur.gety()), colorToPaint))
        {
            st.push(Point(cur.getx() + 1, cur.gety()));
        }
        if (valid(Point(cur.getx(), cur.gety() - 1), colorToPaint))
        {
            st.push(Point(cur.getx(), cur.gety() - 1));
        }
        if (valid(Point(cur.getx(), cur.gety() + 1), colorToPaint))
        {
            st.push(Point(cur.getx(), cur.gety() + 1));
        }
    }
}