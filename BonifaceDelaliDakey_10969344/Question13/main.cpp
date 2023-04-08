#include <iostream>
#include "checkingAccount.h"
#include "savingsAccount.h"

int main() {
    // Create a checking account
    checkingAccount checking(1001, 1000.0, 0.5, 200.0, 0.1);

    // Deposit to checking account
    checking.deposit(500.0);

    // Withdraw from checking account
    checking.withdraw(300.0);

    // Print checking account info
    std::cout << "Checking Account Info:" << std::endl;
    checking.printAccountInfo();

    // Create a savings account
    savingsAccount savings(2001, 5000.0, 1.25);

    // Set interest rate for savings account
    savings.setInterestRate(1.5);

    // Post interest to savings account
    savings.postInterest();

    // Withdraw from savings account
    savings.withdraw(1000.0);

    // Print savings account info
    std::cout << "Savings Account Info:" << std::endl;
    savings.printAccountInfo();

    return 0;
}
