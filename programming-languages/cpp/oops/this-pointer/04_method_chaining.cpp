#include <iostream>
using namespace std;

class Calculator {

private:
    int value = 0;

public:
    Calculator& add(int x) {
        value += x;
        return *this;
    }

    Calculator& multiply(int x) {
        value *= x;
        return *this;
    }

    void display() {
        cout << value;
    }
};

int main() {

    Calculator c;

    c.add(5).multiply(2).display();
}