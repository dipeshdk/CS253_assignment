#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include<point.h>
#include<basic.h>
#include<triangle.h>

class Rectangle : public Basic{
    Point a,b,c,d;
        Triangle t1,t2,t3,t4;
    public:
        Rectangle(Point a,Point b,Point c,Point d);
        bool contains(Point p);
};

#endif