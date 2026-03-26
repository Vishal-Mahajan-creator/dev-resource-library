#include<stdio.h>
extern int num1;
void printf1();

int main(){
    printf("in file2 =%d\n", num1);
    num1 += 50;
    printf1();
    return 0;
}
