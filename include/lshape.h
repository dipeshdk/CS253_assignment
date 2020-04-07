#include<union.h>
#include<point.h>
#include<rectangle.h>
#include<region.h>

class LShape : public Region{
    public:
        Point leftbottom; 
        double a;
        double b;
        double c;
        Union I;
    
        LShape(Point leftbottom,double a1,double b1,double c1);
        virtual bool contains(Point p)override;
        virtual void translate(Point shift)override;
        virtual void rotate(double theta)override;
        virtual ~LShape(){};
};
