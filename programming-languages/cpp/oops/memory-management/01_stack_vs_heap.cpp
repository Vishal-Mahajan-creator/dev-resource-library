#include <iostream>
using namespace std;

class Demo {
public:
    Demo() { cout << "Constructor called\n"; }
    ~Demo() { cout << "Destructor called\n"; }
};

int main() {

    // STACK OBJECT
    Demo d1;

    // HEAP OBJECT
    Demo* d2 = new Demo();

    delete d2;
}