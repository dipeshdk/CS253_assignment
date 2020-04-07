#include<lshape.h>
#include<rectangle.h>
#include<math.h>
#include<point.h>
#include<union.h>
#include<region.h>

Rectangle& left(Point leftbottom,double a1,double b1,double c1){
    Rectangle* r1 = new Rectangle(Point (leftbottom.x,leftbottom.y),
            Point (leftbottom.x+a1,leftbottom.y),
            Point (leftbottom.x+a1, leftbottom.y+b1),
            Point (leftbottom.x, leftbottom.y+b1));
    return *r1;
}
Rectangle& right(Point leftbottom,double a1,double b1,double c1){
    Rectangle *r1 = new Rectangle(Point(leftbottom.x,leftbottom.y),
        Point(leftbottom.x+a1+c1,leftbottom.y),
        Point (leftbottom.x+a1+c1, leftbottom.y+a1),
        Point (leftbottom.x, leftbottom.y+a1));
    return *r1;

}

LShape::LShape(Point leftbottom,double a1,double b1,double c1)
    :leftbottom{leftbottom},a{a1},b{b1},c{c1},I(left(leftbottom,a1,b1,c1),right(leftbottom,a1,b1,c1)){}
    
bool LShape::contains(Point p){
    return (I).contains(p);
}

void LShape::translate(Point shift){
    (I).translate(shift);
}

void LShape::rotate(double theta){
    (I).rotate(theta);
}
