#include<stdio.h>
int main(){

    FILE *fptr;

    fptr = fopen("vishal.txt", "w");

    fprintf(fptr, "hello vishal \n sir");

    fclose(fptr);

    return 0;
}