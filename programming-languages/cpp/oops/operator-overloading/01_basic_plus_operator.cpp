#include <iostream>
using namespace std;

class Number {

public:
    int value;

    Number(int v) {
        value = v;
    }

    Number operator+(Number obj) {
        return Number(value + obj.value);
    }
};

int main() {

    Number n1(10), n2(20);

    Number result = n1 + n2;

    cout << result.value;
}