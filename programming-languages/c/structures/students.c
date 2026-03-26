/*
Array of Structures Example
*/

#include <stdio.h>

struct Student {
    char name[20];
    int age;
};

int main() {

    struct Student students[2];

    // Input
    for(int i=0;i<2;i++) {
        printf("Enter name and age:\n");
        scanf("%s %d", students[i].name, &students[i].age);
    }

    // Output
    printf("\nStudent Details:\n");

    for(int i=0;i<2;i++) {
        printf("%s %d\n", students[i].name, students[i].age);
    }

    return 0;
}