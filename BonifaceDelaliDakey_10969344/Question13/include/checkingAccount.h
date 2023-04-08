#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H


#include "bankAccount.h" // Include the base class header

class checkingAccount : public bankAccount {
private:
    double interestRate;
    double minimumBalance;
    double serviceCharges;

public:
    // Constructors
    checkingAccount(); // Default constructor
    checkingAccount(int accNumber, double initBalance, double interestRate, double minimumBalance, double serviceCharges); // Parametrized constructor

    // Member functions
    void setInterestRate(double rate);
    double getInterestRate();
    void setMinimumBalance(double minBalance);
    double getMinimumBalance();
    void setServiceCharges(double charges);
    double getServiceCharges();
    void postInterest();
    bool isBelowMinimumBalance();
    void writeCheck(double amount);
    void withdraw(double amount); // Overriding the base class method
    void printAccountInfo(); // Overriding the base class method
};


#endif // CHECKINGACCOUNT_H
