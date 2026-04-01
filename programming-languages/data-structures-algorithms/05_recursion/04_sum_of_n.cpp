#include <iostream>
using namespace std;

/*
Sum of first N numbers
*/

int sum(int n)
{
    if(n==0)
        return 0;

    return n + sum(n-1);
}

int main()
{
    cout<<sum(5);
}