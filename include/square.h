#ifndef __SQUARE_H__
#define __SQUARE_H__

#include<point.h>
#include<triangle.h>

class Square : public Basic{
    Point a,b,c,d;
    public:
        Triangle t1,t2,t3,t4;
        Square(Point a,Point b,Point c,Point d);        
        bool contains(Point p);
};

#endif
