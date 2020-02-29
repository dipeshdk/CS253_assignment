#ifndef __COMPLEMENT_H__
#define __COMPLEMENT_H__

#include<region.h>
class Complement : public Region {
    Region* r;
    public:
        bool contains(Point p);
};

#endif