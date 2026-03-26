/*
Structure Pointer Example
*/

#include <stdio.h>

struct Employee {
    char name[20];
    int id;
};

int main() {

    struct Employee emp = {"Amit",101};

    struct Employee *ptr = &emp;

    // Arrow operator
    printf("Name: %s\n", ptr->name);
    printf("ID: %d\n", ptr->id);

    return 0;
}