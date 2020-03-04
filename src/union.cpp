#include<union.h>

bool Union::contains(Point p){
            return (r1.contains(p) || r2.contains(p));
        }  

Union:: Union(Region &r1, Region &r2)
    :r1{r1},r2{r2}{}

// Union:: Union(){}

void Union::translate(Point shift){
    r1.translate(shift);
    r2.translate(shift);
}

void Union::rotate(double theta){
    r1.rotate(theta);
    r2.rotate(theta);
}