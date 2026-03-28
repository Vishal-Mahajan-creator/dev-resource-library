#include <iostream>
using namespace std;

class Box {

private:
    int length;

public:
    Box(int l) { length = l; }

    friend Box operator+(Box, Box);

    void display() {
        cout << length;
    }
};

Box operator+(Box b1, Box b2) {
    return Box(b1.length + b2.length);
}

int main() {

    Box b1(5), b2(10);

    Box b3 = b1 + b2;

    b3.display();
}