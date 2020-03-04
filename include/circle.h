#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include<basic.h>

class Circle : public Basic{
    public:
    double radius;
        Point center;
        Circle(Point center , double r);
        bool contains(Point p);
        void rotate(double theta);   
        void translate(Point shift);
};

#endif