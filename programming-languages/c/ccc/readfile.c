#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("vishl.txt","r");
    char data[100];
    fgets(data, 100, fptr);

    printf("%s", data);
    fclose(fptr);
    return 0;
}