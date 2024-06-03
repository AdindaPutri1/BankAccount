#include "bankAccount.h"

using namespace std;

// Constructor
bankAccount::bankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

// Set account number
void bankAccount::setAccountNumber(int accNum) {
    accountNumber = accNum;
}

// Get account number
int bankAccount::getAccountNumber() const {
    return accountNumber;
}

// Get balance
double bankAccount::getBalance() const {
    return balance;
}

// Deposit money
void bankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    }
}

// Withdraw money
void bankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
    }
}

// Print account information
void bankAccount::printAccountInfo() const {
    cout << "Account Number: " << accountNumber << "\nBalance: " << balance << endl;
}
