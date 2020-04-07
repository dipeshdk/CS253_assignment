#ifndef __REGION_H__
#define __REGION_H__

#include<point.h>

class Region{
    public:
        virtual bool contains(Point p) = 0;
        virtual void translate(Point shift)= 0;
        virtual void rotate(double theta)= 0;
        virtual ~Region(){};

};

#endif