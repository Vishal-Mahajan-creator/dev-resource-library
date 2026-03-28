/*
Returning current object
*/

#include <iostream>
using namespace std;

class Test {

public:
    int x;

    Test* setValue(int x) {
        this->x = x;
        return this;
    }

    void show() {
        cout << x;
    }
};

int main() {

    Test t;

    t.setValue(10)->show();
}