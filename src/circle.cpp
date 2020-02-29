#include<circle.h>
#include<math.h>   
#include<point.h>

Circle :: Circle(Point center , double r)
            :center{center}, radius{r}{}

bool Circle::contains(Point p){
            double dist = sqrt(pow(p.x-center.x,2)+pow(p.y-center.y,2));
            return (dist==radius);
    }