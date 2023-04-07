#include <iostream>
#include "billType.h"


// Default constructor
billType::billType(): billType(0, 0.0, 0.0, 0.0)
{}

// Constructor with parameters
billType::billType(int id, double pharmacyCharges, double doctorFee, double roomCharges)
: patientID {id},
    pharmacyCharges {pharmacyCharges},
    doctorFee {doctorFee},
    roomCharges {roomCharges}
{}

// Member function to set patient ID
void billType::setPatientID(int id)
{
    patientID = id;
}

// Member function to set pharmacy charges
void billType::setPharmacyCharges(double charges)
{
    pharmacyCharges = charges;
}

// Member function to set doctor fee
void billType::setDoctorFee(double fee)
{
    doctorFee = fee;
}

// Member function to set room charges
void billType::setRoomCharges(double charges)
{
    roomCharges = charges;
}

// Member function to retrieve patient ID
int billType::getPatientID() const
{
    return patientID;
}

// Member function to retrieve pharmacy charges
double billType::getPharmacyCharges() const
{
    return pharmacyCharges;
}

// Member function to retrieve doctor fee
double billType::getDoctorFee() const
{
    return doctorFee;
}

// Member function to retrieve room charges
double billType::getRoomCharges() const
{
    return roomCharges;
}

// Member function to calculate total charges
double billType::calculateTotalCharges() const
{
    return pharmacyCharges + doctorFee + roomCharges;
}

// Member function to display bill
void billType::displayBill() const
{
    std::cout << "Patient ID: " << patientID << std::endl;
    std::cout << "Pharmacy Charges: $" << pharmacyCharges << std::endl;
    std::cout << "Doctor's Fee: $" << doctorFee << std::endl;
    std::cout << "Room Charges: $" << roomCharges << std::endl;
    std::cout << "Total Charges: $" << calculateTotalCharges() << std::endl;
}

