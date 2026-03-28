#include <iostream>
using namespace std;

class Demo {

public:
    int x;

    Demo(int val) {
        x = val;
    }

    Demo(const Demo &obj) {
        x = obj.x;
        cout << "Copy Constructor Called\n";
    }
};

int main() {

    Demo d1(10);
    Demo d2 = d1;
}