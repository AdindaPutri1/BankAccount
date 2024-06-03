#include <iostream>
#include "bankAccount.h"
#include "checkingAccount.h"
#include "savingsAccount.h"

using namespace std;

int main() {
    int choice;
    do {
        cout << "Choose account type:\n1. Checking Account\n2. Savings Account\n3. Exit\n";
        cin >> choice;

        if (choice == 1) {
            int accNum;
            double bal, intRate, minBal, servFee;

            cout << "Enter account number: ";
            cin >> accNum;
            cout << "Enter initial balance: ";
            cin >> bal;
            cout << "Enter interest rate (%): ";
            cin >> intRate;
            cout << "Enter minimum balance: ";
            cin >> minBal;
            cout << "Enter service fee: ";
            cin >> servFee;

            checkingAccount myChecking(accNum, bal, intRate, minBal, servFee);
            myChecking.printAccountInfo();

            int action;
            do {
                cout << "\nChoose action:\n1. Deposit\n2. Withdraw\n3. Apply Interest\n4. Write Check\n5. Back to Account Type Selection\n6. Exit\n";
                cin >> action;

                if (action == 1) {
                    double amount;
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    myChecking.deposit(amount);
                }
                else if (action == 2) {
                    double amount;
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    myChecking.withdraw(amount);
                }
                else if (action == 3) {
                    myChecking.applyInterest();
                }
                else if (action == 4) {
                    double amount;
                    cout << "Enter amount to write check for: ";
                    cin >> amount;
                    myChecking.writeCheck(amount);
                }

                myChecking.printAccountInfo();
            } while (action != 5);
        }
        else if (choice == 2) {
            int accNum;
            double bal, intRate;

            cout << "Enter account number: ";
            cin >> accNum;
            cout << "Enter initial balance: ";
            cin >> bal;
            cout << "Enter interest rate (%): ";
            cin >> intRate;

            savingsAccount mySavings(accNum, bal, intRate);
            mySavings.printAccountInfo();

            int action;
            do {
                cout << "\nChoose action:\n1. Deposit\n2. Withdraw\n3. Apply Interest\n4. Back to Account Type Selection\n5. Exit\n";
                cin >> action;

                if (action == 1) {
                    double amount;
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    mySavings.deposit(amount);
                }
                else if (action == 2) {
                    double amount;
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    mySavings.withdraw(amount);
                }
                else if (action == 3) {
                    mySavings.applyInterest();
                }
            } while (action != 4 && action != 5);
        }
        else if (choice != 3) {
            cout << "Invalid choice." << endl;
        }
    } while (choice != 3);

    return 0;
}
