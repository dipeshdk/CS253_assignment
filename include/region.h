#ifndef __REGION_H__
#define __REGION_H__

#include<point.h>

class Region{
    Point origin;
    public:
        bool contains(Point p);
        Region* translate(Point p);
        Region* rotate(double angle);
};

#endif