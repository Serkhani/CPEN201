#include <iostream>
#include "cylinderType.h"

using namespace std;

int main()
{
    double radius, height, shippingCostPerLiter, paintCostPerSqft;

    // Prompt user for input
    cout << "Enter the dimensions of the container (in feet):" << endl;
    cout << "Radius of the base: ";
    cin >> radius;
    cout << "Height: ";
    cin >> height;
    cout << "Enter the shipping cost per liter: ";
    cin >> shippingCostPerLiter;
    cout << "Enter the paint cost per square foot: ";
    cin >> paintCostPerSqft;

    // Create cylinder object with user input
    cylinderType container(radius, height);

    // Calculate shipping cost
    double volume = container.volume();
    double shippingCost = shippingCostPerLiter * (volume * 28.32); // Convert volume to liters

    // Calculate paint cost
    double surfaceArea = container.surfaceArea();
    double paintCost = paintCostPerSqft * surfaceArea;

    // Output the shipping cost and paint cost
    cout << "Shipping cost: $" << shippingCost << endl;
    cout << "Paint cost: $" << paintCost << endl;

    return 0;
}
