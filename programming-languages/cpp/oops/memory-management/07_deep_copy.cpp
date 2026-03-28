#include <iostream>
using namespace std;

class Test {

public:
    int* data;

    Test(int val) {
        data = new int(val);
    }

    // Deep Copy Constructor
    Test(const Test &obj) {
        data = new int(*obj.data);
    }

    ~Test() {
        delete data;
    }
};

int main() {

    Test t1(10);
    Test t2 = t1;
}