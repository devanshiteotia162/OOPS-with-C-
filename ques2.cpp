#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string customerName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        customerName = name;
        balance = bal;
    }

    friend void compareBalance(BankAccount b1, BankAccount b2);
};

void compareBalance(BankAccount b1, BankAccount b2) {
    if (b1.balance > b2.balance)
        cout << b1.customerName << " has higher balance." << endl;
    else if (b2.balance > b1.balance)
        cout << b2.customerName << " has higher balance." << endl;
    else
        cout << "Both have equal balance." << endl;
}

int main() {
    BankAccount b1(101, "Devanshi", 50000);
    BankAccount b2(102, "Riya", 70000);

    compareBalance(b1, b2);

    return 0;
}