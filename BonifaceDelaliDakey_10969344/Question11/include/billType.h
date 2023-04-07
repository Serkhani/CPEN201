#ifndef BILLTYPE_H
#define BILLTYPE_H


class billType
{
public:
    // Constructors
    billType();
    billType(int id, double pharmacyCharges, double doctorFee, double roomCharges);

    // Member functions to set and retrieve data members
    void setPatientID(int id);
    void setPharmacyCharges(double charges);
    void setDoctorFee(double fee);
    void setRoomCharges(double charges);

    int getPatientID() const;
    double getPharmacyCharges() const;
    double getDoctorFee() const;
    double getRoomCharges() const;

    // Member functions to calculate total charges and display bill
    double calculateTotalCharges() const;
    void displayBill() const;

private:
    int patientID;
    double pharmacyCharges;
    double doctorFee;
    double roomCharges;
};

#endif // BILLTYPE_H
