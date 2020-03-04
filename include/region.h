#ifndef __REGION_H__
#define __REGION_H__

#include<point.h>

class Region{
    public:
        virtual bool contains(Point p){};
        virtual void translate(Point shift){};
        virtual void rotate(double theta){};
};

#endif