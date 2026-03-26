#include <iostream>
using namespace std;

class BankAccount {

private:
    double balance = 0;

public:
    void deposit(double amount) {
        balance += amount;
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    BankAccount acc;

    acc.deposit(5000);
    acc.showBalance();

    // acc.balance ❌ NOT ALLOWED
}