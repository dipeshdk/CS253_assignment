#include<circle.h>
#include<math.h>   
#include<iostream>

Circle :: Circle(Point center , double r)
            :center{center}, radius{r}{
                    if( r <= 0 ){
                            std::cout << "Wrong input. Program will be terminated." << std::endl;
                            exit(1);
                    }
            }

bool Circle::contains(Point p){
            double dist = sqrt(pow(p.x-center.x,2)+pow(p.y-center.y,2));
        //     std::cout << "contains of circle being called" << std::endl;
            return (dist<=radius);
    }

void Circle::translate(Point shift){
        center = center.translate(shift);
}


void Circle::rotate(double theta){
        center = center.rotate(theta);
}
