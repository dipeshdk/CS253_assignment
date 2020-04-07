#include<point.h>
#include<region.h>

class Annulus : public Region{
    public:
        double r;
        double R;
        Point center;
        
        Annulus(double r,double R,Point center);
        virtual bool contains(Point p) override;
        virtual void translate(Point p) override;
        virtual void rotate(double theta) override;
        virtual ~Annulus(){};

};