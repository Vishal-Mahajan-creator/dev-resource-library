/*
Runtime Polymorphism
Function Overriding
*/

#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks\n";
    }
};

int main() {
    Dog d;
    d.sound();
}