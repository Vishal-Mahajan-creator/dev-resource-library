/*
=====================================
C ARRAYS & STRINGS
=====================================

Topics:
1. Arrays
2. Traversing Array
3. String Basics
4. String Input/Output
*/

#include <stdio.h>
#include <string.h>

int main() {

    // ---------- ARRAY ----------
    int numbers[5] = {10,20,30,40,50};

    printf("Array Elements:\n");

    for(int i=0;i<5;i++) {
        printf("%d ", numbers[i]);
    }

    // ---------- USER INPUT ARRAY ----------
    int arr[3];

    printf("\nEnter 3 numbers:\n");

    for(int i=0;i<3;i++) {
        scanf("%d",&arr[i]);
    }

    printf("You entered:\n");
    for(int i=0;i<3;i++) {
        printf("%d ",arr[i]);
    }

    // ---------- STRING ----------
    char name[50];

    printf("\nEnter your name: ");
    scanf("%s",name);

    printf("Hello %s\n",name);

    // ---------- STRING FUNCTIONS ----------
    printf("Length = %lu\n", strlen(name));

    return 0;
}