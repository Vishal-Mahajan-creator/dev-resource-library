#include <iostream>
using namespace std;

/*
Fibonacci Series
F(n)=F(n-1)+F(n-2)
*/

int fib(int n)
{
    if(n<=1)
        return n;

    return fib(n-1)+fib(n-2);
}

int main()
{
    cout<<fib(6);
}