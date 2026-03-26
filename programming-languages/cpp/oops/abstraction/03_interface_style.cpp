#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() = 0;
};

class UPI : public Payment {
public:
    void pay() {
        cout << "Paid via UPI\n";
    }
};

class Card : public Payment {
public:
    void pay() {
        cout << "Paid via Card\n";
    }
};

int main() {

    Payment* p;

    UPI u;
    p = &u;
    p->pay();
}