#include "savingsAccount.h"

using namespace std;

// Constructor
savingsAccount::savingsAccount(int accNum, double bal, double intRate)
    : bankAccount(accNum, bal), interestRate(intRate) {}

// Set interest rate
void savingsAccount::setInterestRate(double intRate) {
    interestRate = intRate;
}

// Get interest rate
double savingsAccount::getInterestRate() const {
    return interestRate;
}

// Apply interest
void savingsAccount::applyInterest() {
    if (balance > 0) {
        balance += (balance * interestRate / 100);
    }
}

// Overriding the withdraw method from base class
void savingsAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
    }
}

// Print account information
void savingsAccount::printAccountInfo() const {
    bankAccount::printAccountInfo();
    cout << "Interest Rate: " << interestRate << "%" << endl;
}