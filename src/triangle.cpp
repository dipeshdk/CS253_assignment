#include<point.h>
#include<triangle.h>
#include<math.h>

Triangle::Triangle(Point a,Point b,Point c)
            :a{a},b{b},c{c}{}

double Triangle::area(Point p1, Point p2, Point p3) { 
    return abs((p1.x*(p2.y-p3.y) + p2.x*(p3.y-p1.y)+ p3.x*(p1.y-p2.y))/2.0); 
}

bool Triangle::contains(Point p)
{
    return (area(a,b,c)==area(p,a,b)+area(p,a,c)+area(p,b,c));
}