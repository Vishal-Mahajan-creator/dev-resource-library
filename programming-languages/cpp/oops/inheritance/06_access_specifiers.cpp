/*
Access Specifiers in Inheritance
*/

#include <iostream>
using namespace std;

class Base {
public:
    int publicVar = 10;

protected:
    int protectedVar = 20;

private:
    int privateVar = 30;
};

class Derived : public Base {
public:
    void display() {
        cout << publicVar << endl;
        cout << protectedVar << endl;
        // privateVar not accessible
    }
};

int main() {
    Derived d;
    d.display();
}