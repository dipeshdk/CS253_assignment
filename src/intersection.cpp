#include<intersection.h>

bool Intersection::contains(Point p){
            return (r1.contains(p) && r2.contains(p));
        }

Intersection:: Intersection(Region &r1, Region &r2)
    :r1{r1},r2{r2}{}

void Intersection::translate(Point shift){
    r1.translate(shift);
    r2.translate(shift);
}

void Intersection::rotate(double theta){
    r1.rotate(theta);
    r2.rotate(theta);
}