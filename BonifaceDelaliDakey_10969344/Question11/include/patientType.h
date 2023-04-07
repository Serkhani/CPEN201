#ifndef PATIENTTYPE_H
#define PATIENTTYPE_H
#include <iostream>
#include "dateType.h"
#include "doctorType.h"
class patientType : public personType
{
public:
    patientType();
    patientType(std::string firstName, std::string lastName, std::string id,
                int age, dateType dateOfBirth, doctorType attendingPhysician,
                dateType admitDate, dateType dischargeDate);

    void setID(std::string id);
    void setAge(int age);
    void setDateOfBirth(dateType dateOfBirth);
    void setAttendingPhysician(doctorType attendingPhysician);
    void setAdmitDate(dateType admitDate);
    void setDischargeDate(dateType dischargeDate);

    std::string getID() const;
    int getAge() const;
    dateType getDateOfBirth() const;
    doctorType getAttendingPhysician() const;
    dateType getAdmitDate() const;
    dateType getDischargeDate() const;

    void printInfo() const;

private:
    std::string patientID;
    int patientAge;
    dateType DOB; // Date of birth
    doctorType physician;
    dateType admitDate;
    dateType dischargeDate;
};

#endif // PATIENTTYPE_H
