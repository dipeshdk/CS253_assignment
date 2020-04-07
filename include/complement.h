#ifndef __COMPLEMENT_H__
#define __COMPLEMENT_H__

#include<region.h>
class Complement : public Region {
    public:
        Region &r;
        Complement(Region &r);
        virtual bool contains(Point p)override ;
        virtual void translate(Point shift)override ;
        virtual void rotate(double theta) override ;
        virtual ~Complement(){};
};

#endif