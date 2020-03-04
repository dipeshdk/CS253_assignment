#ifndef __SQUARE_H__
#define __SQUARE_H__

#include<point.h>
#include<triangle.h>
#include<basic.h>

class Square : public Basic{
    public:
        Point leftbottom;
        Point rightbottom;
        Point righttop;
        Point lefttop;

        Triangle t1,t2,t3,t4;
        Square(Point a,Point b,Point c,Point d);        
        bool contains(Point p);
        void rotate(double theta);   
        void translate(Point shift);

};

#endif
