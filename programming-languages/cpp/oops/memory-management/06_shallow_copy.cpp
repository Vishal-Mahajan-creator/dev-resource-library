#include <iostream>
using namespace std;

class Test {

public:
    int* data;

    Test(int val) {
        data = new int(val);
    }
};

int main() {

    Test t1(10);
    Test t2 = t1;

    cout << *t1.data << endl;
    cout << *t2.data << endl;
}