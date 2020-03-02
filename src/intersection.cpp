#include<intersection.h>

bool Intersection::contains(Point p){
            return (r1.contains(p) && r2.contains(p));
        }

Intersection:: Intersection(Region r1, Region r2)
    :r1{r1},r2{r2}{}

Region Intersection::translate(Point shift){
    return Intersection(r1.translate(shift),r2.translate(shift));
}
