/*
=====================================
C POINTERS
=====================================

Topics:
1. Pointer Basics
2. Address Operator (&)
3. Dereference Operator (*)
4. Pointer with Functions
*/

#include <stdio.h>

int main() {

    // ---------- NORMAL VARIABLE ----------
    int number = 10;

    // ---------- POINTER DECLARATION ----------
    int *ptr;

    // Store address of variable
    ptr = &number;

    printf("Value of number = %d\n", number);

    // Address of variable
    printf("Address of number = %p\n", &number);

    // Pointer stores address
    printf("Pointer value (address) = %p\n", ptr);

    // Dereference pointer
    printf("Value using pointer = %d\n", *ptr);

    // ---------- MODIFY VALUE USING POINTER ----------
    *ptr = 50;

    printf("Modified number = %d\n", number);

    return 0;
}