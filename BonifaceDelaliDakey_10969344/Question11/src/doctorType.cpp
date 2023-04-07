#include "doctorType.h"
#include "personType.h"
#include "string.h"

void doctorType::setSpecialty(std::string spec)
{
    this->specialty = spec;
}

std::string doctorType::getSpecialty() const
{
    return specialty;
}

std::string doctorType::getDoctorName() const
{
    return this->getFirstName() + ' ' + this->getLastName();
}

doctorType::doctorType(std::string first, std::string last, std::string spec)
    : personType(first, last), specialty {spec}
{}
