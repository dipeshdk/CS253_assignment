#ifndef __UNION_H__
#define __UNION_H__

#include<region.h>
class Union : public Region {
    Region* r1;
    Region* r2;
    public :
        bool contains(Point p);
};
#endif