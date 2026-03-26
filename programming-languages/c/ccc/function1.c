#include<stdio.h>
#include<conio.h>
int getint();
int main()
{
    int n;
    n=getint();
    printf("The given number is %d", n);
    return 0;
}
int getint(){
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);
    return n;
}