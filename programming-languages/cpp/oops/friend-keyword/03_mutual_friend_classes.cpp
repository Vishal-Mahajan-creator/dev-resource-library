#include <iostream>
using namespace std;

class B;

class A {

private:
    int x = 5;

public:
    friend class B;
};

class B {

private:
    int y = 10;

public:
    void add(A a) {
        cout << a.x + y;
    }
};

int main() {

    A a;
    B b;

    b.add(a);
}