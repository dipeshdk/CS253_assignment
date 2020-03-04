#ifndef __UNION_H__
#define __UNION_H__

#include<region.h>
class Union : public Region {
    public :
        
        Region &r1;
        Region &r2;
        
        Union(Region &r1,Region &r2);
        // Union();
        bool contains(Point p);
        void translate(Point shift);
        void rotate(double theta);
};
#endif