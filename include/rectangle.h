#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include<point.h>
#include<basic.h>
#include<triangle.h>

class Rectangle : public Basic{
    public:

        Point leftbottom;
        Point rightbottom;
        Point righttop;
        Point lefttop;

        Triangle t1,t2,t3,t4;
        Rectangle(Point a,Point b,Point c,Point d);
        bool contains(Point p);
        void translate(Point shift);
        void rotate(double theta);   
};

#endif