#include<union.h>

bool Union::contains(Point p){
            return (r1->contains(p) || r2->contains(p));
        }  