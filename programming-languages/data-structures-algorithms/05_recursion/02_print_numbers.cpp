#include <iostream>
using namespace std;

/*
HEAD RECURSION
Work happens after recursive call
*/

void printAscending(int n)
{
    if(n==0)
        return;

    printAscending(n-1);

    cout<<n<<" ";
}

/*
TAIL RECURSION
Work happens before recursive call
*/

void printDescending(int n)
{
    if(n==0)
        return;

    cout<<n<<" ";
    printDescending(n-1);
}

int main()
{
    printAscending(5);
    cout<<endl;
    printDescending(5);
}