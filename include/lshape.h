#include<union.h>
#include<point.h>
#include<rectangle.h>

class LShape{
    public:
        Point leftbottom; 
        double a;
        double b;
        double c;
        Union I;
    
        LShape(Point leftbottom,double a1,double b1,double c1);
        bool contains(Point p);
        void translate(Point shift);
        void rotate(double theta);
};
