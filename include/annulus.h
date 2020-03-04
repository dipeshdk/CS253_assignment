#include<point.h>
class Annulus{
    public:
        double r;
        double R;
        Point center;
        
        Annulus(double r,double R,Point center);
        bool contains(Point p);
        void translate(Point p);
        void rotate(double theta);  
};