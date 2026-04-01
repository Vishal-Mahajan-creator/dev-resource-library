#include <iostream>
using namespace std;

/*
    BASIC RECURSION STRUCTURE

    Every recursive function needs:
    1. Base Case
    2. Recursive Call
*/

void greet(int n)
{
    // BASE CASE
    if(n == 0)
        return;

    cout<<"Hello "<<n<<endl;

    // RECURSIVE CALL
    greet(n-1);
}

int main()
{
    greet(5);
}