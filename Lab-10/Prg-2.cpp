/*Bank Account Management
Objective:
Create a BankAccount class with the following:

Non-static members:
accountHolder (string)
balance (double)
Static member:
interestRate (float, shared across all accounts)
Constructors:
Parameterized constructor to initialize the account holder's name and balance.
Methods:
deposit(amount) to add an amount to the balance.
withdraw(amount) to subtract an amount from the balance if there are sufficient funds.
displayAccountDetails() to display the account holder’s name and balance.
Task:
Write a program to:

Set the interest rate using the static member.
Create multiple BankAccount objects, perform transactions (deposit/withdraw), and display account details.*/


#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Static member to hold the interest rate
    static float interestRate;

    // Parameterized constructor
    BankAccount(string holderName, double initialBalance)
        : accountHolder(holderName), balance(initialBalance) {}

    // Method to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << " to " << accountHolder << "'s account." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Method to withdraw an amount
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << " from " << accountHolder << "'s account." << endl;
        } else {
            cout << "Insufficient funds or invalid amount." << endl;
        }
    }

    // Method to display account details
    void displayAccountDetails() const {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    // Static method to set the interest rate
    static void setInterestRate(float rate) {
        if (rate >= 0) {
            interestRate = rate;
        } else {
            cout << "Invalid interest rate." << endl;
        }
    }
};

// Initialize the static member
float BankAccount::interestRate = 0.0;

int main() {
    // Set the interest rate
    BankAccount::setInterestRate(3.5);

    // Create BankAccount objects
    BankAccount account1("Alice", 1000.0);
    BankAccount account2("Bob", 500.0);

    // Perform transactions
    account1.deposit(200.0);
    account1.withdraw(150.0);

    account2.deposit(300.0);
    account2.withdraw(1000.0); // Should show insufficient funds

    // Display account details
    cout << endl << "Account 1 Details:" << endl;
    account1.displayAccountDetails();

    cout << endl << "Account 2 Details:" << endl;
    account2.displayAccountDetails();


}