#ifndef __COMPLEMENT_H__
#define __COMPLEMENT_H__

#include<region.h>
class Complement : public Region {
    Region r;
    public:
        Complement(Region r);
        bool contains(Point p);
        Region translate(Point shift);
        Region rotate(double theta);

};

#endif