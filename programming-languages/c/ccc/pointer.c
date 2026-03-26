#include<stdio.h>
 int main()
 {
    int a=9;
    int *p=&a;
    *p = 10;
    int **pp=&p;
  

    printf("value of a is %d\n", a);
    printf("value of p is %d\n", *p);
    printf("value of pp is %d\n", **pp);
    printf("Addres of a is %d\n", &a);


    printf(" 1st pointer store the  addres of a %d\n",(void *) p);
    printf("Addres of 2st pointer is %d\n",(void *) pp);
    printf("Addres of 1st pointer is %d\n\n",(void *) &p);

    int b[5]={1,2,3,4,5};
    int *q = b;
    for (int i = 0; i < 5;i++){
       
       printf("value of array is b[%d]=%d\t value  of pointer  q(%d)=%d \t Addres of array b[%d]=%d\t Addres of pointer q[%d]=%d\n\n", i, b[i] ,i, *(q + i),i, (q + i),i,(void*)(p+i));
    }

   // print value using for loop
   int x = 10, y = 20, z = 30;
   int *arr[3] = {&x, &y, &z};

   for (int i = 0; i < 3; i++)
   {
       printf("value of pointer arr[%d]=%d\n", i, *arr[i]);
   }
    
    return 0;
 }