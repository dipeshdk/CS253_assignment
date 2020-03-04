#include<lshape.h>
#include<rectangle.h>
#include<math.h>
#include<point.h>
#include<union.h>

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
    
    // Point leftlb(leftbottom.x,leftbottom.y);
    // Point leftrt(leftbottom.x+a1, leftbottom.y+b1);
    // Point leftlt(leftbottom.x, leftbottom.y+b1);
    // Point leftrb(leftbottom.x+a1,leftbottom.y);
    // Rectangle left1(leftlb,leftrb,leftrt,leftlt); // left rectangle

    // Point rightlb(leftbottom.x,leftbottom.y);
    // Point rightrt(leftbottom.x+a1+c1, leftbottom.y+a1);
    // Point rightlt(leftbottom.x, leftbottom.y+a1);
    // Point rightrb(leftbottom.x+a1+c1,leftbottom.y);
    // Rectangle right1(rightlb,rightrb,rightrt,rightlt); // right rectangle

    // Union I1(left1,right1);
    // I = &I1;

    

bool LShape::contains(Point p){
    return (I).contains(p);
}

void LShape::translate(Point shift){
    (I).translate(shift);
}

void LShape::rotate(double theta){
    (I).rotate(theta);
}
