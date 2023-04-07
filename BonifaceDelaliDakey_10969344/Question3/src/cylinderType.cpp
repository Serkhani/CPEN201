#include <iostream>
#include "cylinderType.h"

void cylinderType::setHeight(double h)
{
    if (h >= 0)
        height = h;
    else
        height = 0;
}

double cylinderType::getHeight()
{
    return height;
}

double cylinderType::volume()
{
    return area() * height;
}

double cylinderType::surfaceArea()
{
    return 2 * area() + 2 * 3.1416 * getRadius() * height;
}

void cylinderType::setBaseRadius(double r)
{
    circleType::setRadius(r);
}

void cylinderType::setBaseCenter(double x, double y)
{
    centerX = x;
    centerY = y;
}

void cylinderType::print()
{
    circleType::print();
    std::cout << "Height: " << height << std::endl;
    std::cout << "Volume: " << volume() << std::endl;
    std::cout << "Surface Area: " << surfaceArea() << std::endl;
}
//constructor
cylinderType::cylinderType(double r, double h)
    : circleType(r)
{
    setHeight(h);
}
