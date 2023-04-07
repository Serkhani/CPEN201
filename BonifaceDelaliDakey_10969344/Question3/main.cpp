#include <iostream>
#include "cylinderType.h"

int main()
{
    // Create a cylinder object
    cylinderType myCylinder(5, 10); // radius = 5, height = 10

    // Print the properties of the cylinder
    std::cout << "Properties of the Cylinder:" << std::endl;
    myCylinder.print();

    // Update the properties of the cylinder
    myCylinder.setBaseRadius(8);
    myCylinder.setHeight(15);
    myCylinder.setBaseCenter(2, 3);

    // Print the updated properties of the cylinder
    std::cout << "Updated Properties of the Cylinder:" << std::endl;
    myCylinder.print();

    return 0;
}
