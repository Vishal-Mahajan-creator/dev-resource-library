#include <iostream>
using namespace std;

class A {

private:
    int secret = 50;

    friend class B;
};

class B {
public:
    void show(A a) {
        cout << a.secret;
    }
};

int main() {

    A objA;
    B objB;

    objB.show(objA);
}