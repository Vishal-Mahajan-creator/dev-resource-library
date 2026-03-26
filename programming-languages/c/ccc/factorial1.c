#include <stdio.h>
int main()
{
    int a;
    int factorial = 1;
    printf("Enter number:-");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        factorial = i * factorial;
    }
    printf("factorial is=%d\n", factorial);
    return 0;
}
