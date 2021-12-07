#ifndef _SHAPE2_H
#define _SHAPE2_H

#include<iostream>
#include<Beginning/inc/config.h>
#include<Beginning/inc/draw.h>

class Shape
{
public:
    virtual void draw()=0;
    virtual ~Shape() { }
};

class Line : public Shape
{
public:
    Line(const Point &p1, const Point &p2)
    :start(p1), end(p2){}

    void draw()
    {
        graphic::drawLine(start, end);
    }

    Point start;
    Point end;
};


class Rect : public Shape
{
public:
    Rect(const Point &p, int w, int h)
    :leftUp(p), width(w), height(h){}

    void draw()
    {
        graphic::drawRect(leftUp, width, height);
    }

    Point leftUp;
    int width;
    int height;
};

#if(CHANGE)
class Circle : public Shape
{
public:
    Circle(const Point &p, int r)
    :center(p), radius(r){}

    void draw()
    {
        graphic::drawCircle(center, radius);
    }

    Point center;
    int radius;
};
#endif


#endif
