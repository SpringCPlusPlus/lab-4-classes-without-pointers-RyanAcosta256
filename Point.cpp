#include <iostream>
#include <cmath> // For sqrt() and pow()
#include "Point.h"

using namespace std;

    Point::Point(double xCoord, double yCoord){
        x = xCoord;
        y = yCoord;
    }

    // Member function to calculate distance to another Point
    double Point::distanceTo(const Point& other) const{
        //formated this way for better readability 
        return  
            sqrt( 
                    pow(other.x-x, 2 ) +
                    pow(other.y -y, 2) 
                );
    }

    //Member function to print the point.
    void Point::print() const{
        cout << x<<","<<y;
    }
