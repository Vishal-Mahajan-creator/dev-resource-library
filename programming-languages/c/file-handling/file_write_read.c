/*
=====================================
C FILE HANDLING
=====================================

Topics:
1. Open File
2. Write File
3. Read File
4. Close File
*/

#include <stdio.h>

int main() {

    // File pointer
    FILE *fp;

    // ---------- WRITE TO FILE ----------
    fp = fopen("student.txt", "w");

    if(fp == NULL){
        printf("File not created!\n");
        return 1;
    }

    fprintf(fp, "Name: Rahul\n");
    fprintf(fp, "Course: Full Stack Development\n");

    fclose(fp);

    printf("Data written successfully!\n");

    // ---------- READ FROM FILE ----------
    char ch;

    fp = fopen("student.txt", "r");

    if(fp == NULL){
        printf("File not found!\n");
        return 1;
    }

    printf("\nReading File:\n");

    while((ch = fgetc(fp)) != EOF){
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}