#include <iostream>
using namespace std;

int main() {

    int* ptr = new int;

    *ptr = 50;

    cout << *ptr << endl;

    delete ptr;
}

// Array Allocation
// int* arr = new int[5];

// delete[] arr;