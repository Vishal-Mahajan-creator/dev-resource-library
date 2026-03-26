#include<stdio.h>
#include<conio.h>
int main()
{
    int day;
    printf("Enter the number between in (1to7):-");
    scanf("%d",&day);
    //when use enter number between 1 to 7  it return the day
    switch (day)
    {
    case 1:
        printf("Sunday\n\n");
        break;

    case 2:
        printf("Munday\n\n");
        break;

    case 3:
        printf("Tuseday\n\n");
        break;

    case 4:
        printf("Wednesday\n\n");
        break;

    case 5:
        printf("Thusday\n\n");
        break;

   case 6:
        printf("Friday\n\n");
        break;

    case 7:
        printf("Saturday\n\n");
        break;

    default:
    printf("Enter valid inpute!\n\n");

        break;
    }

    int a;
    printf("Enter number to check the given no. is even or odd:-");
    scanf("%d",&a);
    switch (a%2)
    {
    case 0:
        printf("Given number is even");
        break;
    case 1:
        printf("Given number is odd");
        break;

    default:
    printf("Enter valid number");

        break;
    }
    return 0;
}