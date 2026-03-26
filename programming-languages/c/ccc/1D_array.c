#include<stdio.h>
void main()
{
    int arr[5] = {11, 22, 33, 44, 55};
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
    printf("\n\n");

    /*Same printing by using  for loop*/
    int a[5]= {11, 22, 33, 44, 55};
    for (int i= 0;i<= 4; i++)
    {
        printf("%d\n", a[i]);
    }


}