#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include "bankAccount.h"

class savingsAccount : public bankAccount {
private:
    double interestRate;

public:
    // Constructor
    savingsAccount(int accNum, double bal, double intRate);

    // Setter and Getter for interest rate
    void setInterestRate(double intRate);
    double getInterestRate() const;

    // Method to apply interest
    void applyInterest();

    // Overriding the withdraw method from base class
    void withdraw(double amount) override;

    // Print account information
    void printAccountInfo() const override;
};

#endif
