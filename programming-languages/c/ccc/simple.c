#include<stdio.h>
void main(){
 
    int a = 50, b = 20;
    //Arithmatic operator
    
    printf("Arithmatic operator\n\n");
    printf("Addition of a+b=%d\n",a + b);
    printf("Substractipn of a-b=%d\n", a - b);
    printf("Multiplication of a*b=%d\n" ,a * b);
    printf("Division of a/b=%d\n" ,a / b);
    printf("Module of a%b=%d\n" ,a % b);

    //Assignmement operator
    printf("Assignmement operator\n\n");
    printf("Assighnment operator=%d\n", a);
    //pre-increment
    printf("Assighnment +=%d\n", a+=13);
    //post-increment
    //a=50;
    //int sum= a =+ 4;
    // printf("Assighnment =+%d\n", sum);
    a = 50;
    printf("Assighnment -=%d\n", a-=15);
    a = 50;
    printf("Assighnment /=%d\n", a/=1);
    a = 50;
    printf("Assighnment =%d\n", a%=1);
    a = 50;
    printf("Assighnment *=%d\n\n", a*=13);

    //Increment and Decriment operator
    a=50;
    a++;
    printf("Increment operator%d\n",a);
    a = 50;
    a--;
    printf("Decriment operator%d\n\n",a);

    //Relational Operator
    a = 50;
    b = 20;
    printf("Relational operator\n\n");
    printf("Relational Operator(=)%d\n", a == b);
    printf("Relational Operator(>)%d\n", a > b);
    printf("Relational Operator(<)%d\n", a < b);
    printf("Relational Operator(>=)%d\n", a >= b);
    printf("Relational Operator(<=)%d\n\n", a <= b);

    //Logical operator
    printf("Logical operator\n");
    a = 50;
    b = 20;
    printf("Both number are positive(&&:-AND)%d\n:-",(a > 0) && (b > 0));
    a = 50;
    b = 20;
    printf("'a' are positive 'b' is nigative(||:-OR)%d\n", (a > 0) || (b < 0));
    if (!(a == b))
    {
        printf("'a' is not equal to 'b'(!:-NOt)\n\n");
    }
    
    //Bitwise operator
    printf("Bitwise operator\n");
    printf("a & b=%d\n", a & b);
    printf("a | b=%d\n", a | b);
    printf("a ^ b=%d\n", a ^ b);
    printf("~a=%d\n", ~a);
    printf("a >> b=%d\n", a >> b);
    printf("a << b=%d\n\n", a << b);

     //Ternory operator
     printf("Ternory operator\n");
     int result = (a > b) ? a : b;
     printf("Ternory operator%d\n", result);
     int a1 =9988;
     int result1 = (a1 %2==0) ? printf("The number is Even",result1):  printf("The number is Odd",result1);

     //comma (,) operatior
     printf("comma (,)  operator\n");
     int result2 = (4 - 6, 3 + 9);
     printf("comma (,) operatior(4 - 6, 3 + 9)=%d\n\n", result2);

     //Sizeof operatior
     printf("Sizeof  operator\n");
     double z = 10;
     char q;
     float w;
     long r;
     printf("Size of operatior=%lu\n",sizeof(a));
     printf("Size of operatior=%lu\n",sizeof(z));
     printf("Size of operatior=%lu\n",sizeof(q));
     printf("Size of operatior=%lu\n",sizeof(w));
     printf("Size of operatior=%lu\n",sizeof(r));


}