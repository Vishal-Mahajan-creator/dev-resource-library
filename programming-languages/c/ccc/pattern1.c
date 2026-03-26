#include<stdio.h>
int main(){

    int i, j,k,n=5;
    //patern 10 9 8 7 6 5 4 3 2 1
    for (i = 10; i>=1;i--){
        printf("%d\t", i);
    }
    printf("\n\n");

    /*patern    *****
                ****
                ***
                **
                *
        */
    for (i = 1; i<=5;i++){
        for (j = i; j <= 5;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");


        /*patern    *****
                    *****
                    *****
                    *****
                    *****
        */ 
    for (i = 1; i<=5;i++){
        for (j = 1; j <= 5;j++){
            printf("*\t");
        }
        printf("\n");
    }
    printf("\n\n");

    /*pattern  1       2       3       4       5
               1       2       3       4       5
               1       2       3       4       5
               1       2       3       4       5
               1       2       3       4       5
    */

    for (i = 1; i<=5;i++){
        for (j = 1; j <= 5;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }
    printf("\n\n");


    /*printing pattern  1      1       1       1       1
                        2       2       2       2       2
                        3       3       3       3       3
                        4       4       4       4       4
                        5       5       5       5       5
    */
    for (i = 1; i<=5;i++){
        for (j = 1; j <= 5;j++){
            printf("%d\t",i);
        }
        printf("\n");
    }
    printf("\n\n");


    /*printing patten 
            *
            **
            ***
            ****
            *****
    */
    for (i = 5; i>=1;i--){
        for (j = i; j <= 5;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");


    /*printing pattern      1       2       3       4       5
                            2       3       4       5
                            3       4       5
                            4       5
                            5 */
    for (i = 1; i<=5;i++){
        for (j = i; j <= 5;j++){
            printf("%d\t",j);
        }
        printf("\n\n");
    }

    
    /*printing pattern  1       1       1       1       1
                        2       2       2       2
                        3       3       3
                        4       4
                        5
    */
   for (i = 1; i<=5;i++){
    for (j = i; j <= 5;j++){
        printf("%d\t",i);
    }
    printf("\n");
    }
    printf("\n\n");


    /*printing pattern  5       4       3       2       1
                        5       4       3       2
                        5       4       3
                        5       4
                        5
     */
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >=i ;j--){
            printf("%d\t",j);
        }
        printf("\n");
    }
    printf("\n\n");

    /*printing pattern  1
                        1       2
                        1       2       3
                        1       2       3       4
                        1       2       3       4       5           
     */
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <=i ;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }
    printf("\n\n");

     /*printing pattern     5
                            4       5
                            3       4       5
                            2       3       4       5
                            1       2       3       4       5
         */

    for ( i = 5; i >= 1; i--)
    {
        for (j = i; j <=5;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }
    printf("\n\n");

    
    for ( i = 5; i >=1; i--)
    {
        for (j = 1; j <=5;j++){
            printf("%d\t",i);
        }
        printf("\n");
    }
    printf("\n\n");

    /*     5
          44
         333
        2222
       11111*/
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = i; k >= 1; k--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n\n");
    /*
            1
           22
          333
         4444
        55555
    */
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = i; k >= 1; k--)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = n; i >= 1; i--)
    {
        for (j = 0; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n\n");

    /*     A
          B A
         C B A
        D C B A
       E D C B A*/
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < i; k++)
        {
            printf("%c ", 'A' + i - 1 - k);
        }
        printf("\n");
    }
    return 0;
}
