#include <iostream>
using namespace std;

class Demo {

public:
    int normalVar;
    static int staticVar;
};

int Demo::staticVar = 0;

int main() {

    Demo d1, d2;

    d1.normalVar = 10;
    d2.normalVar = 20;

    d1.staticVar = 100;

    cout << d2.staticVar; // shared
}