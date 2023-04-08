#include "checkingAccount.h"
#include <iostream>

// Default constructor
// checkingAccount::checkingAccount(): interestRate{0.0}, minimumBalance{0.0}, serviceCharges{0.0} {}
checkingAccount::checkingAccount(){
    interestRate = 0.0;
    minimumBalance = 0.0;
    serviceCharges = 0.0;
}

// Parametrized constructor
checkingAccount::checkingAccount(int accNumber, double initBalance, double rate, double minBalance, double charges)
    : bankAccount(accNumber, initBalance), interestRate{rate}, minimumBalance{minBalance}, serviceCharges{charges} {}

// Set the interest rate
void checkingAccount::setInterestRate(double rate) {
    interestRate = rate;
}

// Retrieve the interest rate
double checkingAccount::getInterestRate() {
    return interestRate;
}

// Set the minimum balance
void checkingAccount::setMinimumBalance(double minBalance) {
    minimumBalance = minBalance;
}

// Retrieve the minimum balance
double checkingAccount::getMinimumBalance() {
    return minimumBalance;
}

// Set the service charges
void checkingAccount::setServiceCharges(double charges) {
    serviceCharges = charges;
}

// Retrieve the service charges
double checkingAccount::getServiceCharges() {
    return serviceCharges;
}

// Post interest to the account balance
void checkingAccount::postInterest() {
    double interest = getBalance() * interestRate / 100.0;
    deposit(interest);
}

// Check if the balance is below the minimum balance
bool checkingAccount::isBelowMinimumBalance() {
    return getBalance() < minimumBalance;
}

// Write a check to withdraw money from the account
void checkingAccount::writeCheck(double amount) {
    if (!isBelowMinimumBalance()) {
        withdraw(amount);
    } else {
        std::cout << "Error: Insufficient balance. Check cannot be written." << std::endl;
    }
}

// Withdraw money from the account (overrides the base class method)
void checkingAccount::withdraw(double amount) {
    double totalAmount = amount + serviceCharges;
    if (getBalance() >= totalAmount) {
        bankAccount::withdraw(totalAmount); // Call the base class method
    } else {
        std::cout << "Error: Insufficient balance. Service charges may apply." << std::endl;
    }
}

// Print account information (overrides the base class method)
void checkingAccount::printAccountInfo() {
    bankAccount::printAccountInfo(); // Call the base class method

std::cout << "Interest Rate: " << interestRate << "%" << std::endl;
std::cout << "Minimum Balance: $" << minimumBalance << std::endl;
std::cout << "Service Charges: $" << serviceCharges << std::endl;
std::cout << "--------------------------------------" << std::endl;
}
