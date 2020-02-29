#include<intersection.h>

bool Intersection::contains(Point p){
            return (r1->contains(p) && r2->contains(p));
        }
    