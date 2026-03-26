/*
Pointer with Function
Swap values using Call by Reference
*/

#include <stdio.h>

void swap(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int x = 5;
    int y = 10;

    printf("Before Swap: %d %d\n", x, y);

    swap(&x, &y);

    printf("After Swap: %d %d\n", x, y);

    return 0;
}