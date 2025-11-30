#include <iostream>
using namespace std;

class BankAccount {
public:
    double balance = 0;

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    double interest() {
        return balance * 0.05;  // 5% interest
    }
};

int main() {
    SavingsAccount s;

    s.deposit(1000);

    cout << "Balance: " << s.balance << endl;
    cout << "5% Interest: " << s.interest() << endl;

    return 0;
}
