/*
Default Arguments
*/

#include <iostream>
using namespace std;

int multiply(int a, int b = 2) {
    return a * b;
}

int main() {

    cout << multiply(5) << endl;      // uses default b
    cout << multiply(5,4) << endl;   // override default

    return 0;
}