#ifndef __UNION_H__
#define __UNION_H__

#include<region.h>
class Union : public Region {
    public :
        Region &r1;
        Region &r2;
        
        Union(Region &r1,Region &r2);
        virtual ~Union(){};
        virtual bool contains(Point p)override;
        virtual void translate(Point shift)override;
        virtual void rotate(double theta)override;
};
#endif