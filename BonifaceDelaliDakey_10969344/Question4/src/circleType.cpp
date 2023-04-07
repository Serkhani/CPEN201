#include <iostream>
#include "circleType.h"


void circleType::setRadius(double r)
{
    if (r >= 0)
        radius = r;
    else
        radius = 0;
}

double circleType::getRadius()
{
    return radius;
}
double circleType::area()
{
    return 3.1416 * radius * radius;
}
double circleType::circumference()
{
    return 2 * 3.1416 * radius;
}
circleType::circleType(double r)
{
    setRadius(r);
}

void circleType::print()
{
    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Circumference: " << circumference() << std::endl;
}


