/*
=====================================
C STRUCTURES
=====================================

Topics:
1. Structure Declaration
2. Structure Initialization
3. Access Members
*/

#include <stdio.h>
#include <string.h>

// -------- STRUCTURE DECLARATION --------
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {

    // -------- STRUCTURE VARIABLE --------
    struct Student s1;

    // Assign values
    strcpy(s1.name, "Rahul");
    s1.age = 21;
    s1.marks = 88.5;

    // Access members using dot operator
    printf("Student Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}