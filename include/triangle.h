#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include<point.h>
#include<basic.h>

class Triangle : public Basic{
    public:
    Point a,b,c;
        Triangle(Point a,Point b,Point c);
        static double area(Point p1,Point p2,Point p3);
        virtual bool contains(Point p)override;
        virtual void rotate(double theta)override;   
        virtual void translate(Point shift)override;
        virtual ~Triangle(){};
};

#endif
