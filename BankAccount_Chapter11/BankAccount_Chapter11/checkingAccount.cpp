#include "checkingAccount.h"
using namespace std;

// Constructor
checkingAccount::checkingAccount(int accNum, double bal, double intRate, double minBal, double servFee)
    : bankAccount(accNum, bal), interestRate(intRate), minBalance(minBal), serviceFee(servFee) {}

// Set interest rate
void checkingAccount::setInterestRate(double intRate) {
    interestRate = intRate;
}

// Get interest rate
double checkingAccount::getInterestRate() const {
    return interestRate;
}

// Set minimum balance
void checkingAccount::setMinBalance(double minBal) {
    minBalance = minBal;
}

// Get minimum balance
double checkingAccount::getMinBalance() const {
    return minBalance;
}

// Set service fee
void checkingAccount::setServiceFee(double servFee) {
    serviceFee = servFee;
}

// Get service fee
double checkingAccount::getServiceFee() const {
    return serviceFee;
}

// Apply interest
void checkingAccount::applyInterest() {
    if (balance > 0) {
        balance += (balance * interestRate / 100);
    }
}

// Check if balance is below minimum balance
bool checkingAccount::isBelowMinBalance() const {
    return balance < minBalance;
}

// Write a check (withdraw money)
void checkingAccount::writeCheck(double amount) {
    withdraw(amount);
}

// Overriding the withdraw method from base class
void checkingAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        if (isBelowMinBalance()) {
            balance -= serviceFee;
        }
    }
}

// Print account information
void checkingAccount::printAccountInfo() const {
    bankAccount::printAccountInfo();
    cout << "Interest Rate: " << interestRate << "%\nMinimum Balance: " << minBalance
        << "\nService Fee: " << serviceFee << endl;
}
