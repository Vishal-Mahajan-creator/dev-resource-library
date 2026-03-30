#include <iostream>
using namespace std;

// Example 1: Static Array
// Memory allocated = proportional to n
int arr[100]; // O(n) space

// Example 2: Recursive Function
void fun(int n) {
    if (n == 0) return;
    fun(n - 1); // Each call uses stack memory
}

int main() {
    cout << "Space Complexity Examples" << endl;

    // Array usage
    arr[0] = 10;
    cout << "Array first element: " << arr[0] << endl;

    // Recursive call demonstration
    fun(5); // Stack frames created for each call

    return 0;
}


// 📝 Notes on Space Complexity
// Definition: Space complexity measures the total memory used by an algorithm.
// It includes:

// Fixed part → constants, program code, simple variables.

// Variable part → memory that grows with input size (arrays, dynamic allocations).

// Function call stack → memory used by recursion.