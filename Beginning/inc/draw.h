#ifndef _DRAW_H
#define _DRAW_H

class Point
{
public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int x;
    int y;
};


namespace graphic
{

void drawLine(const Point &p1, const Point &p2)
{

}

void drawRect(const Point &p, int width, int height)
{

}

void drawCircle(const Point &p, int r)
{

}

}

#endif