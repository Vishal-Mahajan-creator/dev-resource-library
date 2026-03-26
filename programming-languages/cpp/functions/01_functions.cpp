/*
=====================================
C++ Functions Basics
=====================================
*/

#include <iostream>
using namespace std;

// function declaration
void greet();

// function with return value
int add(int a, int b);

int main() {

    greet();

    int result = add(5,3);
    cout << "Sum = " << result << endl;

    return 0;
}

// function definition
void greet() {
    cout << "Welcome to C++ Functions" << endl;
}

int add(int a, int b) {
    return a + b;
}