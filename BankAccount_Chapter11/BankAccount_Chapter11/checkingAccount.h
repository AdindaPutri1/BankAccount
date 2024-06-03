#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "bankAccount.h"

class checkingAccount : public bankAccount {
private:
    double interestRate;
    double minBalance;
    double serviceFee;

public:
    // Constructor
    checkingAccount(int accNum, double bal, double intRate, double minBal, double servFee);

    // Setter and Getter for interest rate
    void setInterestRate(double intRate);
    double getInterestRate() const;

    // Setter and Getter for minimum balance
    void setMinBalance(double minBal);
    double getMinBalance() const;

    // Setter and Getter for service fee
    void setServiceFee(double servFee);
    double getServiceFee() const;

    // Method to apply interest
    void applyInterest();

    // Method to check if balance is below minimum balance
    bool isBelowMinBalance() const;

    // Method to write a check (same as withdrawing money)
    void writeCheck(double amount);

    // Overriding the withdraw method from base class
    void withdraw(double amount) override;

    // Print account information
    void printAccountInfo() const override;
};

#endif
