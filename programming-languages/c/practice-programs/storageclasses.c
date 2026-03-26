#include<stdio.h>


    //register
    void f1(){
    register int i = 0;
    for (i = 0; i < 5;i++)
    {
        printf("Register:-%d\n", i);
    }
    printf("\n");
    }
    // Static
    void f2()
    {
        static int i = 0;
        i++;
        printf("Static:-%d\n", i);
    }
        int main()
        {
            f1();
            f2();
            f2();
            f2();
            f2();
            return 0;
        }