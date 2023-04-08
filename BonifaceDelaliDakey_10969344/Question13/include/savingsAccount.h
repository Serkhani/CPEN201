#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "bankAccount.h"

class savingsAccount : public bankAccount {
private:
    double interestRate; // interest rate for the savings account

public:
    // Constructors
    savingsAccount();
    savingsAccount(int accountNumber, double balance, double interestRate);

    // Setters
    void setInterestRate(double rate);

    // Getters
    double getInterestRate() const;

    // Additional operations
    void postInterest(); // calculates and adds interest to the balance
    void withdraw(double amount); // override the base class method
    void printAccountInfo() const; // override the base class method
};
#endif // SAVINGSACCOUNT_H
