#ifndef __INTERSECTION_H__
#define __INTERSECTION_H__

#include<region.h>
class Intersection : public Region{
    Region r1;
    Region r2;
    public:
        bool contains(Point p);
        Region translate(Point shift);
        Intersection(Region r1, Region r2);
        Region rotate(double theta);

};

#endif