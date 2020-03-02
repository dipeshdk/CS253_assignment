#ifndef __REGION_H__
#define __REGION_H__

#include<point.h>

class Region{
    public:
        virtual bool contains(Point p);
        virtual Region translate(Point shift);
        virtual Region rotate(double theta);
};

#endif