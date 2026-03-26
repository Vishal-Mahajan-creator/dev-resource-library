/*
===================================
C PROGRAMMING BASICS
===================================

Topics Covered:
1. Program Structure
2. Variables
3. Data Types
4. Input & Output
5. Operators
*/

#include <stdio.h> // Standard input/output library

int main() {

    // -------- OUTPUT ----------
    printf("Hello C Programmer!\n");

    // -------- VARIABLES & DATA TYPES ----------
    int age = 20;           // integer
    float salary = 25000.5; // decimal
    char grade = 'A';       // single character

    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Grade: %c\n", grade);

    // -------- USER INPUT ----------
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("You entered: %d\n", number);

    // -------- OPERATORS ----------
    int result = number + 10;
    printf("Number + 10 = %d\n", result);

    return 0; // program ends successfully
}