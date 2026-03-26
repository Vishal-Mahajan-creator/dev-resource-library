/*
Function Overloading
*/

#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {

    cout << sum(2,3) << endl;
    cout << sum(2.5,3.5) << endl;
    cout << sum(1,2,3) << endl;

    return 0;
}