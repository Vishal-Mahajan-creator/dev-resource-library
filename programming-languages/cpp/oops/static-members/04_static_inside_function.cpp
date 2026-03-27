#include <iostream>
using namespace std;

void counter() {

    static int x = 0;

    x++;

    cout << x << endl;
}

int main() {

    counter();
    counter();
    counter();
}