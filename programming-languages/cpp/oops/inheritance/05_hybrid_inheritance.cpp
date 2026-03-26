/*
Hybrid Inheritance
*/

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A\n";
    }
};

class B : public A {};
class C : public A {};

class D : public B, public C {}; // hybrid

int main() {
    D obj;
    // obj.show(); // ambiguity error
}