/*
Multiple Inheritance
Multiple parents → One child
*/

#include <iostream>
using namespace std;

class Father {
public:
    void skills() {
        cout << "Coding skill\n";
    }
};

class Mother {
public:
    void talent() {
        cout << "Art skill\n";
    }
};

class Child : public Father, public Mother {};

int main() {
    Child c;
    c.skills();
    c.talent();
}