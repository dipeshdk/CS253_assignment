#include<complement.h>
#include<point.h>
#include<region.h>

bool Complement::contains(Point p){
            return !(r.contains(p));
        }
Complement::Complement(Region &r)
    :r{r}{}

void Complement::translate(Point shift){
    r.translate(shift);
}

void Complement::rotate(double theta){
    r.rotate(theta);
}
