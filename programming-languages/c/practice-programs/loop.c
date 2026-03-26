#include<stdio.h>
#include<conio.h>
int main()
    {   
        //If else ladder 1
        int a,b,c;

        printf("Enter three number  :-");
        scanf("%d %d %d", &a, &b, &c);

       
        if(a>b&&a>c)
        {
            printf("A is greater!\n\n");
        }
        else if(b>a&&b>c){
            printf("B is greater!\n\n");
        }

        else if(c>a&&c>b) {
            printf("C is greater!\n\n");
        }
        else{
            printf("Enter valid number\n\n");
        }

        //If else ladder 2
        int b1;
        printf("Enter number to check it positev or negative!:-");
        scanf("%d", &b1);
        if (b1>0)
        {
            printf("The given number is positive!\n\n");
        }
        else if (b1<0)
        {
            printf("The given number is negative!\n\n");
        }
        else if (b1==0)
        {
            printf("The given number is zero!\n\n");
        }
        else
        {
            printf("Enter valid number!\n\n");
        }
        

        //if else
        int a1;
        printf("Enter one number to check it is even or odd number:-");
        scanf("%d", &a1);

        if(a1%2==0)
            {
                printf("Given number is even\n\n");
            }
            else
            {
                printf("Given number is odd\n\n");
            }

            //nested decition
            int age;
            printf("Enter age for voting:-");
            scanf("%d", &age);
            if (age >= 0) {
                if (age >= 18) {
                    printf("You are eligible to vote.\n");
                } else {
                    printf("You are not eligible to vote.\n");
                }
            } else {
                printf("Invalid age entered.\n");
            }
        
            return 0;
            
            }
    
   
    
