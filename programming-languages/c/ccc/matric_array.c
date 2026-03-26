#include<stdio.h>
int main()
{
    int arr[2][3][3] = {
        {{1, 2,4}, 
        {4, 5, 6},
        {1, 2,6}},//1st matrics

        {{1, 2,6}, 
        {4, 5, 6},
        {1, 2,6}}
        };
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <3; j++)
        {
            for (int k= 0; k <3; k++)
            {
            printf("%d\t", arr[i][j][k]);
        }
        printf("\n");
    }
    }
    return 0;

}