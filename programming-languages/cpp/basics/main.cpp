/*
=====================================
C++ BASICS PROGRAM
=====================================

Topics:
1. Program Structure
2. Input Output
3. Variables & Data Types
4. Operators
*/

#include <iostream>   // input-output library
using namespace std;  // avoid std:: writing

int main() {

    // -------- OUTPUT ----------
    cout << "Hello C++ Developer!" << endl;

    // -------- VARIABLES ----------
    int age = 21;
    float salary = 25000.5;
    char grade = 'A';
    string name = "Rahul";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    // -------- USER INPUT ----------
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "You entered: " << number << endl;

    // -------- OPERATORS ----------
    int result = number + 10;

    cout << "Number + 10 = " << result << endl;

    return 0;
}