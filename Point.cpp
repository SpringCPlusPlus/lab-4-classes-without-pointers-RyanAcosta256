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
        double top = other.y - y;
        double down = other.x -x;
        
        return top/down;
    }

    //Member function to print the point.
    void Point::print() const{
        cout << x<<","<<y;
    }
