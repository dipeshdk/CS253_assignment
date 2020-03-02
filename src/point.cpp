#include<point.h>
#include<math.h>

Point :: Point(double a=0, double b=0)
            :x{a},y{b} {}; 
  
Point Point::translate(Point shift)
{
    Point tp = Point(x+shift.x,y+shift.y);
    return tp; // translated point
}

Point Point::rotate(double theta)
{
    Point rp = Point((x*cos(theta))-(y*sin(theta)),(y*cos(theta))+(x*sin(theta)));
    return rp; // rotated point
}