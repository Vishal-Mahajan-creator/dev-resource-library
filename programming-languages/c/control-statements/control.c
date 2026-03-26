/*
=====================================
C CONTROL STATEMENTS
=====================================

Topics:
1. if / else
2. switch
3. loops
4. break & continue
*/

#include <stdio.h>

int main() {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // ---------- IF STATEMENT ----------
    if (number > 0) {
        printf("Number is Positive\n");
    }

    // ---------- IF ELSE ----------
    if (number % 2 == 0) {
        printf("Even Number\n");
    } else {
        printf("Odd Number\n");
    }

    // ---------- ELSE IF LADDER ----------
    if (number > 90) {
        printf("Grade A\n");
    } else if (number > 70) {
        printf("Grade B\n");
    } else if (number > 50) {
        printf("Grade C\n");
    } else {
        printf("Grade D\n");
    }

    // ---------- SWITCH STATEMENT ----------
    int day;

    printf("Enter day number (1-3): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid Day\n");
    }

    // ---------- FOR LOOP ----------
    printf("\nFor Loop:\n");
    for(int i=1; i<=5; i++) {
        printf("%d ", i);
    }

    // ---------- WHILE LOOP ----------
    printf("\n\nWhile Loop:\n");
    int i = 1;
    while(i <= 3) {
        printf("%d ", i);
        i++;
    }

    // ---------- DO WHILE LOOP ----------
    printf("\n\nDo While Loop:\n");
    int j = 1;
    do {
        printf("%d ", j);
        j++;
    } while(j <= 3);

    // ---------- BREAK & CONTINUE ----------
    printf("\n\nBreak & Continue Example:\n");

    for(int k=1; k<=5; k++) {

        if(k == 3)
            continue; // skip 3

        if(k == 5)
            break; // stop loop

        printf("%d ", k);
    }

    return 0;
}