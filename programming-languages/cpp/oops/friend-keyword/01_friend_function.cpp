/*
Friend Function Example
*/

#include <iostream>
using namespace std;

class Box {

private:
    int length;

public:
    Box() {
        length = 10;
    }

    // declare friend
    friend void display(Box b);
};

void display(Box b) {
    cout << "Length: " << b.length;
}

int main() {

    Box obj;
    display(obj);
}