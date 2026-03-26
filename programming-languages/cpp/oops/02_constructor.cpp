/*
Constructor Example
*/

#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    // Constructor
    Car(string b) {
        brand = b;
        cout << "Car Created\n";
    }

    // Destructor
    ~Car() {
        cout << "Car Destroyed\n";
    }
};

int main() {

    Car c1("BMW");

    return 0;
}