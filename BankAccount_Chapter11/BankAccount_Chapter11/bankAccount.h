#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <iostream> 

class bankAccount {
protected:
    int accountNumber;
    double balance;

public:
    // Constructor
    bankAccount(int accNum, double bal);

    // Setter and Getter for account number
    void setAccountNumber(int accNum);
    int getAccountNumber() const;

    // Getter for balance
    double getBalance() const;

    // Methods to deposit and withdraw money
    void deposit(double amount);
    virtual void withdraw(double amount);

    // Method to print account information
    virtual void printAccountInfo() const;
};

#endif
