#include<stdio.h>
typedef struct
{
    /* data */
    int roll_no;
    float marks;
    char name[100];
}variableoftyped;
int main(){
    variableoftyped v1;
    v1. roll_no=101;
    v1.marks = 90;
    strcpy(v1.name,"Vishal");

    printf("The roll no.%d\n", v1.roll_no);
    printf("The marks is %.0f %%\n", v1.marks);
    printf("The Name is:-%s\n", v1.name);

    return 0;
}
