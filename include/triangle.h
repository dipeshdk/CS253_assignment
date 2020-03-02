#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include<point.h>
#include<basic.h>

class Triangle : public Basic{
    Point a,b,c;
    public:
        Triangle(Point a,Point b,Point c);
        static double area(Point p1,Point p2,Point p3);
        bool contains(Point p);
        Region translate(Point shift);
};

#endif
