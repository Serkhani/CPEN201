#ifndef CYLINDERTYPE_H
#define CYLINDERTYPE_H

#include "circleType.h"

class cylinderType : public circleType
{
public:
    void setHeight(double h);
    // Function to set the height of the cylinder.
    // Postcondition: if (h >= 0) height = h;
    // otherwise height = 0;
    double getHeight();
    // Function to return the height of the cylinder.
    // Postcondition: The value of height is returned.
    double volume();
    // Function to calculate and return the volume of the cylinder.
    // Postcondition: Volume is calculated and returned.
    double surfaceArea();
    // Function to calculate and return the surface area of the cylinder.
    // Postcondition: Surface area is calculated and returned.
    void setBaseRadius(double r);
    // Function to set the radius of the base of the cylinder.
    // Postcondition: if (r >= 0) circleType::setRadius(r);
    // otherwise circleType::setRadius(0);
    void setBaseCenter(double x, double y);
    // Function to set the center of the base of the cylinder.
    // Postcondition: circleType::setCenter(x, y);
    void print();
    // Function to print the properties of the cylinder.
    // Postcondition: The radius, height, volume, and surface area of the cylinder are printed to the console
    cylinderType(double r = 0, double h = 0);
    // Constructor with default parameters.
    // Radius and height are set according to the parameters.
    // The default values of radius and height are 0.0;
    // Postcondition: circleType::setRadius(r); height = h;
private:
    double height;
    double centerX;
    double centerY;
};

#endif // CYLINDERTYPE_H
