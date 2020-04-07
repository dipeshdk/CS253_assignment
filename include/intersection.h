#ifndef __INTERSECTION_H__
#define __INTERSECTION_H__

#include<region.h>

class Intersection : public Region{
    public:
        Region &r1;
        Region &r2;
        virtual bool contains(Point p) override;
        virtual void translate(Point shift) override;
        Intersection(Region &r1, Region &r2);
        virtual void rotate(double theta) override;
        virtual ~Intersection(){};
};

#endif