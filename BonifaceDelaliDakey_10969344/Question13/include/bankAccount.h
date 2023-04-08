#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
class bankAccount
{
private:
    int accountNumber;
    double balance;

public:
    // Constructors
    bankAccount(); // Default constructor
    bankAccount(int accNumber, double initBalance); // Parametrized constructor

    // Member functions
    void setAccountNumber(int accNumber);
    int getAccountNumber() const;
    int getAccountNumber() const;
    double getBalance() const;
    void deposit(double amount);
    void withdraw(double amount);
    void printAccountInfo();
};
#endif // BANKACCOUNT_H
