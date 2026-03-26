/*
Abstraction using class design
*/

#include <iostream>
using namespace std;

class ATM {
public:
    void withdraw() {
        authenticate();
        processTransaction();
    }

private:
    void authenticate() {
        cout << "Authentication Done\n";
    }

    void processTransaction() {
        cout << "Money Withdrawn\n";
    }
};

int main() {
    ATM user;
    user.withdraw();
}