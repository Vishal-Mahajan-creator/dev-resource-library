/*
Inheritance
*/

#include <iostream>
using namespace std;

// Parent Class
class Animal {
public:
    void eat() {
        cout << "Animal eats\n";
    }
};

// Child Class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks\n";
    }
};

int main() {

    Dog d;

    d.eat();   // inherited
    d.bark();

    return 0;
}