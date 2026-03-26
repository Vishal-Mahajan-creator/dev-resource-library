/*
Abstraction using Abstract Class
*/

#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0; // pure virtual function
};

class Bike : public Vehicle {
public:
    void start() {
        cout << "Bike starts with key\n";
    }
};

int main() {

    Bike b;
    b.start();

    return 0;
}