#include <iostream>
#include "dateType.h"
#include "doctorType.h"
#include "patientType.h"

using namespace std;

int main()
{
    // Create a date of birth object
    dateType dob(5, 20, 1990);
    // Create a doctor object
    doctorType physician("John", "Doe");

    // Create a patient object
    patientType patient("Jane", "Doe", "P001", 30, dob, physician, dateType(3, 1, 2023), dateType(3, 10, 2023));

    // Print patient information
    patient.printInfo();

    return 0;

}
