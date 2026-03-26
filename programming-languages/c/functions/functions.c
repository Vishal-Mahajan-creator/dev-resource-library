/*
=====================================
C FUNCTIONS
=====================================

Topics Covered:
1. Function Declaration
2. Function Definition
3. Function Call
4. Parameters & Arguments
5. Return Values
6. Types of Functions
*/

#include <stdio.h>

// -------- FUNCTION DECLARATION --------
int add(int a, int b);
void greet();
int square(int num);
void displayNumber(int n);

int main() {

    // -------- FUNCTION CALL --------
    greet();

    int result = add(5, 3);
    printf("Addition Result = %d\n", result);

    int sq = square(4);
    printf("Square = %d\n", sq);

    displayNumber(10);

    return 0;
}

// -------- FUNCTION DEFINITIONS --------

// Function without parameter & without return value
void greet() {
    printf("Welcome to C Functions!\n");
}

// Function with parameters & return value
int add(int a, int b) {
    return a + b;
}

// Function with parameter & return value
int square(int num) {
    return num * num;
}

// Function with parameter but no return value
void displayNumber(int n) {
    printf("Number is: %d\n", n);
}