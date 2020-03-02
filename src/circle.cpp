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
            return (dist==radius);
    }

Circle Circle::translate(Point shift){
        return Circle(center.translate(shift),radius);
}