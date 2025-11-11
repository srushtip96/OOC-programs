#include <iostream>
using namespace std;

// Base Class
class Account {
protected:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    Account(string name, int accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    virtual void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
        }
    }

    virtual void display() {
        cout << "\nAccount Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};


// Derived Class – Saving Account
class SavingAccount : public Account {
private:
    double interestRate;

public:
    SavingAccount(string name, int accNumber, double initialBalance, double rate)
        : Account(name, accNumber, initialBalance) {
        interestRate = rate;
    }

    void applyInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest Applied: " << interest << endl;
    }

    void display() override {
        cout << "\n[Savings Account]" << endl;
        Account::display();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};


// Derived Class – Checking Account
class CheckingAccount : public Account {
private:
    double transactionFee;

public:
    CheckingAccount(string name, int accNumber, double initialBalance, double fee)
        : Account(name, accNumber, initialBalance) {
        transactionFee = fee;
    }

    void withdraw(double amount) override {
        double total = amount + transactionFee;

        if (total > balance) {
            cout << "Insufficient balance for withdrawal + fee!" << endl;
        } else {
            balance -= total;
            cout << "Withdrawn: " << amount << " (Fee: " << transactionFee << ")" << endl;
        }
    }

    void display() override {
        cout << "\n[Checking Account]" << endl;
        Account::display();
        cout << "Transaction Fee: " << transactionFee << endl;
    }
};


// Main Function
int main() {

    // Savings Account
    SavingAccount savings("Alice", 1001, 5000.0, 3.0);

    savings.display();
    savings.deposit(1000);
    savings.withdraw(2000);
    savings.applyInterest();
    savings.display();


    // Checking Account
    CheckingAccount checking("Bob", 1002, 3000.0, 20.0);

    checking.display();
    checking.deposit(1500);
    checking.withdraw(1000);
    checking.display();

    return 0;
}
