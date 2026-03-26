/*
Hierarchical Inheritance
One parent → Many children
*/

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating\n";
    }
};

class Dog : public Animal {};
class Cat : public Animal {};

int main() {
    Dog d;
    Cat c;

    d.eat();
    c.eat();
}