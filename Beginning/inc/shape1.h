#ifndef _SHAPE1_H
#define _SHAPE1_H

#include<iostream>
#include<Beginning/inc/config.h>
#include<Beginning/inc/draw.h>

class Line
{
public:
    Line(const Point &p1, const Point &p2)
    :start(p1), end(p2){}

    Point start;
    Point end;
};


class Rect
{
public:
    Rect(const Point &p, int w, int h)
    :leftUp(p), width(w), height(h){}

    Point leftUp;
    int width;
    int height;
};

#if(CHANGE)
class Circle
{
public:
    Circle(const Point &p, int r)
    :center(p), radius(r){}

    Point center;
    int radius;
};
#endif


#endif
