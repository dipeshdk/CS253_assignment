#include<rectangle.h>
#include<triangle.h>

Rectangle :: Rectangle(Point a,Point b,Point c,Point d)
                :a{a},b{b}, c{c}, d{d},
                t1{Triangle(a,b,c)},
                t2 {Triangle(a,d,c)},
                t3 {Triangle(a,b,d)},
                t4 {Triangle(d,b,c)}{
    }
        
bool Rectangle :: contains(Point p){
        return (t1.contains(p)||t2.contains(p)||t3.contains(p)||t4.contains(p));
    }
