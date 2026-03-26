#include<stdio.h>


void f1(int a,int b){
  
    printf("actual value of a:-%d\n",a );
    printf("actual value of b:-%d\n\n", b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swap value of a=%d\n", a);
    printf("Swap value of b=%d\n", b);
}
int main(){


    f1(100,200);
    return 0
}

