#include<square.h>
#include<triangle.h>
#include<math.h>
#include<iostream>

Square::Square(Point a,Point b,Point c,Point d)
            :leftbottom{a}, rightbottom{b}, righttop{c}, lefttop{d},
                t1{Triangle(a,b,c)},
                t2{Triangle(a,d,c)},
                t3{Triangle(a,b,d)},
                t4{Triangle(d,b,c)}{
                    double diag1 = sqrt(pow((leftbottom.x - righttop.x),2)+pow((leftbottom.y - righttop.y),2));
                    double diag2 = sqrt(pow((lefttop.x - rightbottom.x),2)+pow((lefttop.y - rightbottom.y),2));
                    double angle = ((leftbottom.y - righttop.y)* (lefttop.y - rightbottom.y))*1.0/((leftbottom.x - righttop.x)*(lefttop.x - rightbottom.x));
                    if(diag1!= diag2)
                    {
                        std::cout << "Wrong input. Program will be terminated." << std::endl;
                        exit(1);
                    }
                    else if(angle != -1)
                    {
                        std::cout << "Wrong input. Program will be terminated." << std::endl;
                        exit(1);
                    }
                }

bool Square::contains(Point p){
    return (t1.contains(p)||t2.contains(p)||t3.contains(p)||t4.contains(p));
}

void Square::translate(Point shift){
    leftbottom = leftbottom.translate(shift);
    rightbottom=rightbottom.translate(shift);
    righttop = righttop.translate(shift);
    lefttop = lefttop.translate(shift);
    t1.translate(shift);
    t2.translate(shift);
    t3.translate(shift);
    t4.translate(shift);

}

void Square::rotate(double theta){
    leftbottom = leftbottom.rotate(theta);
    rightbottom=rightbottom.rotate(theta);
    righttop = righttop.rotate(theta);
    lefttop = lefttop.rotate(theta);
    t1.rotate(theta);
    t2.rotate(theta);
    t3.rotate(theta);
    t4.rotate(theta);
}

