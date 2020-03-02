#ifndef __POINT_H__
#define __POINT_H__

class Point {
    public:
        double x,y;
        Point(double a, double b);
        Point translate(Point shift);
        Point rotate(double theta);
};

#endif 
