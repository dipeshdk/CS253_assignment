#include<point.h>

Point :: Point(double a=0, double b=0)
            :x{a},y{b} {}; 
  
Point Point::translate(Point shift)
{
    Point tp = Point(x+shift.x,y+shift.y);
    return tp; // translated point
}