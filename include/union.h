#ifndef __UNION_H__
#define __UNION_H__

#include<region.h>
class Union : public Region {
    Region r1;
    Region r2;
    public :
        Union(Region r1,Region r2);
        bool contains(Point p);
        Region translate(Point shift);

};
#endif