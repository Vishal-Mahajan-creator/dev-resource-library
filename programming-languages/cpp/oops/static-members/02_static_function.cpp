#include <iostream>
using namespace std;

class Math {

public:
    static int add(int a, int b) {
        return a + b;
    }
};

int main() {

    cout << Math::add(5,3);
}