#include<stdio.h>

struct s1 
{
    int id;
    char name[20];
    int age;
    double mob_no;
    float salary;
};
int main()
{
    struct s1 x1;
    x1.id=101;
    strcpy(x1.name,"Vishal");
    x1.age = 21;
    x1.mob_no=8484070410;
    x1.salary = 100000;

    printf("ID=%d\n",x1.id);
    printf("Name=%s\n",x1.name);

    printf("Age=%d\n",x1.age);
    printf("Mobile number=%.0lf\n",x1.mob_no);
    printf("Salary=%.0f\n",x1.salary);

    return 0;
}
