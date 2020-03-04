#ifndef __INTERSECTION_H__
#define __INTERSECTION_H__

#include<region.h>
class Intersection : public Region{
    public:
    Region &r1;
    Region &r2;
        bool contains(Point p);
        void translate(Point shift);
        Intersection(Region &r1, Region &r2);
        void rotate(double theta);

};

#endif