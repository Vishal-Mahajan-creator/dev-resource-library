#include <iostream>
using namespace std;

class Demo {

public:
    void compare(Demo* obj) {

        if(this == obj)
            cout << "Same Object";
        else
            cout << "Different Object";
    }
};

int main() {

    Demo d1, d2;

    d1.compare(&d1);
    d1.compare(&d2);
}

// Used in:

// jQuery
// Builder Pattern
// Fluent APIs