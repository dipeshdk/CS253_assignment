#ifndef __SQUARE_H__
#define __SQUARE_H__

#include<point.h>
#include<triangle.h>
#include<basic.h>

class Square : public Basic{
    Point leftbottom;
    Point rightbottom;
    Point righttop;
    Point lefttop;

    public:
        Triangle t1,t2,t3,t4;
        Square(Point a,Point b,Point c,Point d);        
        bool contains(Point p);
        Region rotate(double theta);   
        Region translate(Point shift);

};

#endif
