#include <iostream>
using namespace std;

class Test {

public:
    Test() {
        cout << "Object Created\n";
    }

    ~Test() {
        cout << "Memory Released\n";
    }
};

int main() {

    Test t;
}