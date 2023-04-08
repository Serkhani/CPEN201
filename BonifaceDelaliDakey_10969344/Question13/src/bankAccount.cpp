#include <iostream>
#include "bankAccount.h"

// Default constructor
bankAccount::bankAccount(): bankAccount{0, 0.0} {}

// Parametrized constructor
bankAccount::bankAccount(int accNumber, double initBalance):accountNumber{accNumber}, balance{initBalance} {}

// Set the account number
void bankAccount::setAccountNumber(int accNumber)
{
    accountNumber = accNumber;
}

// Retrieve the account number
int bankAccount::getAccountNumber() const
{
    return accountNumber;
}

// Retrieve the balance
double bankAccount::getBalance() const
{
    return balance;
}

// Deposit money into the account
void bankAccount::deposit(double amount)
{
    balance += amount;
}

// Withdraw money from the account
void bankAccount::withdraw(double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
    }
    else
    {
        std::cout << "Error: Insufficient balance." << std::endl;
    }
}

// Print account information
void bankAccount::printAccountInfo()
{
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
}
