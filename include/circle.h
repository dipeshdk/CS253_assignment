#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include<basic.h>

class Circle : public Basic{
    public:
    double radius;
        Point center;
        Circle(Point center , double r);
        virtual bool contains(Point p) override;
        virtual void rotate(double theta) override;   
        virtual void translate(Point shift) override;
        virtual ~Circle(){};
};

#endif