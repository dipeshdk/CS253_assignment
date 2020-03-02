#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include<basic.h>

class Circle : public Basic{
    Point center;
    double radius;
    public:
        Circle(Point center , double r);
        bool contains(Point p);
        Region rotate(double theta);   
        Region translate(Point shift);
};

#endif