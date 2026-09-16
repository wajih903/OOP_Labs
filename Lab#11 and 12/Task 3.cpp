#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:

    static int totalAccounts;

    BankAccount(string name, double b) {
        accountHolder = name;
        balance = b;
        totalAccounts++; 
    }

    void displayDetails() {
        cout << "Account Holder: " << accountHolder << " | Balance: $" << balance << endl;
    }
};

int BankAccount::totalAccounts = 0;

int main() {
    BankAccount acc1("Khan", 5000.0);
    BankAccount acc2("Wajih", 12000.0);
    BankAccount acc3("Sara", 8500.0);

    acc1.displayDetails();
    acc2.displayDetails();
    acc3.displayDetails();

    cout << "\nTotal Bank Accounts Created: " << BankAccount::totalAccounts << endl;

    return 0;
}
