#include<stdio.h>
#include<conio.h>
void area();
void main()
{
    area();
}
void area(){
    float a_circle;
    float r;
    printf("Enter radius:-");
    scanf("%f",&r);
    a_circle = 3.14 * r * r;
    printf("Area of circle is:%f", a_circle);
}