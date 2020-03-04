#include<annulus.h>
#include<point.h>
#include<intersection.h>
#include<complement.h>
#include<circle.h>

Annulus :: Annulus(double r,double R,Point center)
    :r{r}, R{R},center{center} {}

bool Annulus ::contains(Point p){
    Circle c1(center,R);//Bigger Circle
    Circle c2(center,r);//Smaller Circle
    Complement b(c2);
    Intersection a(c1,b);
    return a.contains(p);
}

void Annulus::translate(Point shift){
    center = center.translate(shift);
}

void Annulus::rotate(double theta){
    center = center.rotate(theta); 
}