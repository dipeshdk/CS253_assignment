#ifndef __BASIC_H__
#define __BASIC_H__

#include<region.h>

class Basic : public Region {
    public:
        virtual ~Basic(){};
        virtual bool contains(Point p)override{};
        virtual void translate(Point shift)override{};
        virtual void rotate(double theta)override{};
};

#endif