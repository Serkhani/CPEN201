#include "savingsAccount.h"
#include "bankAccount.h"

// Default constructor
savingsAccount::savingsAccount() {
    interestRate = 0.0;
}

// Parameterized constructor
savingsAccount::savingsAccount(int accountNumber, double balance, double interestRate)
    : bankAccount(accountNumber, balance), interestRate(interestRate) {}

// Setter for interest rate
void savingsAccount::setInterestRate(double rate) {
    interestRate = rate;
}

// Getter for interest rate
double savingsAccount::getInterestRate() const {
    return interestRate;
}

// Post interest to the balance
void savingsAccount::postInterest() {
    double interest = getBalance() * (interestRate / 100.0);
    deposit(interest);
}

// Withdraw from the savings account (overrides the base class method)
void savingsAccount::withdraw(double amount) {
    if (amount <= getBalance()) {
        bankAccount::withdraw(amount);
    } else {
        std::cout << "Error: Insufficient balance!" << std::endl;
    }
}

// Print account information (overrides the base class method)
void savingsAccount::printAccountInfo() const {
    std::cout << "Account Number: " << getAccountNumber() << std::endl;
    std::cout << "Balance: $" << getBalance() << std::endl;
    std::cout << "Interest Rate: " << interestRate << "%" << std::endl;
    std::cout << "--------------------------------------" << std::endl;
}
