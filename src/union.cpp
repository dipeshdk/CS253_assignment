#include<union.h>

bool Union::contains(Point p){
            return (r1.contains(p) || r2.contains(p));
        }  

Union:: Union(Region r1, Region r2)
    :r1{r1},r2{r2}{}

Region Union::translate(Point shift){
    return Union(r1.translate(shift),r2.translate(shift));
}

Region Union::rotate(double theta){
    return Union(r1.rotate(theta),r2.rotate(theta));
}