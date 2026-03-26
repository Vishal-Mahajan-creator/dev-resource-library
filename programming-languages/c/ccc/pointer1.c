 #include<stdio.h>
 int main(){
     
     // print value using for loop
     int x = 10, y = 20, z = 30;
     int *arr[3] = {&x, &y, &z};

     for (int i = 0; i < 3; i++)
     {
         printf("value of pointer arr[%d]=%d\n", i, *arr[i]);
     }
    return 0;
}