#include "patientType.h"


// Default constructor
patientType::patientType()
{
    // Initialize data members with default values
    patientID = "";
    patientAge = 0;
    DOB.setDate(1, 1, 1900);
    admitDate.setDate(1, 1, 1900);
    dischargeDate.setDate(1, 1, 1900);
}

// Parameterized constructor
patientType::patientType(std::string firstName, std::string lastName, std::string id,
                         int age, dateType dateOfBirth, doctorType attendingPhysician,
                         dateType admitDate, dateType dischargeDate)
    : personType(firstName, lastName)
{
    // Initialize data members with provided values
    patientID = id;
    patientAge = age;
    DOB = dateOfBirth;
    physician = attendingPhysician;
    this->admitDate = admitDate;
    this->dischargeDate = dischargeDate;
}

// Setter for patientID
void patientType::setID(std::string id)
{
    patientID = id;
}

// Setter for patientAge
void patientType::setAge(int age)
{
    patientAge = age;
}

// Setter for date of birth
void patientType::setDateOfBirth(dateType dateOfBirth)
{
    DOB = dateOfBirth;
}

// Setter for attending physician
void patientType::setAttendingPhysician(doctorType attendingPhysician)
{
    physician = attendingPhysician;
}

// Setter for admit date
void patientType::setAdmitDate(dateType admitDate)
{
    this->admitDate = admitDate;
}

// Setter for discharge date
void patientType::setDischargeDate(dateType dischargeDate)
{
    this->dischargeDate = dischargeDate;
}

// Getter for patientID
std::string patientType::getID() const
{
    return patientID;
}

// Getter for patientAge
int patientType::getAge() const
{
    return patientAge;
}

// Getter for date of birth
dateType patientType::getDateOfBirth() const
{
    return DOB;
}

// Getter for attending physician
doctorType patientType::getAttendingPhysician() const
{
    return physician;
}

// Getter for admit date
dateType patientType::getAdmitDate() const
{
    return admitDate;
}

// Getter for discharge date
dateType patientType::getDischargeDate() const
{
    return dischargeDate;
}

// Print patient information
void patientType::printInfo() const
{
    std::cout << "Patient ID: " << patientID << std::endl;
    std::cout << "Name: " << getFirstName() << " " << getLastName() << std::endl;
    std::cout << "Age: " << patientAge << std::endl;
    std::cout << "Date of Birth: ";
    DOB.printDate();
    std::cout << std::endl;
    std::cout << "Attending Physician: " << physician.getDoctorName() << std::endl;
    std::cout << "Admit Date: ";
    admitDate.printDate();
    std::cout << std::endl;
    std::cout << "Discharge Date: ";
    dischargeDate.printDate();
    std::cout << std::endl;
}
