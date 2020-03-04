#ifndef __COMPLEMENT_H__
#define __COMPLEMENT_H__

#include<region.h>
class Complement : public Region {
    public:
    Region &r;
        Complement(Region &r);
        bool contains(Point p);
        void translate(Point shift);
        void rotate(double theta);

};

#endif