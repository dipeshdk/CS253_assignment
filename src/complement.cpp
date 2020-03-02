#include<complement.h>
#include<point.h>

bool Complement::contains(Point p){
            return !(r.contains(p));
        }
Complement::Complement(Region r)
    :r{r}{}

Region Complement::translate(Point shift){
    return Complement(r.translate(shift));
}

