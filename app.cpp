#include <iostream>
#include <cmath> // For sqrt() and pow()
#include "Point.h"
//#include "Rectangle.h"

int main() {
    Point p1(1.0, 2.0);
    Point p2(4.0, 6.0);

    std::cout << "Distance between p1 and p2: " << p1.distanceTo(p2) << std::endl;

    //Point topLeft(0.0, 5.0);
    //Rectangle rect(topLeft, 10.0, 5.0);

    //std::cout << "Rectangle Area: " << rect.area() << std::endl;
    //std::cout << "Rectangle Perimeter: " << rect.perimeter() << std::endl;

    return 0;
}