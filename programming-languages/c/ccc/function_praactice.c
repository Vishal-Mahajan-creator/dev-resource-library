#include<stdio.h>
//functio without parameter without return type (use void main)

void p1(){
    printf("Hello\n");
}
//functio with parameter with return type

void p2(int a,int b){
    int sum = a + b;
    printf("Sumb of a & b is=%d\n\n",sum);

}
 void p3(){
    int arr[3]={1,2,3};
    for (int i = 0; i < 3;i++)
    {
        printf("the array is:-%d\n", arr[i]);
    }
 }
 void p4(){
    int a=10;
    printf("Actul value of 'A'is %d\n", a);
    int *p = &a;
    *p = 20;
    printf("Change  value of 'A'is %d\n", *p);

 }
int main(){
    p1();
    p2(10, 20);
    p3();
    p4();
    return 0;
}