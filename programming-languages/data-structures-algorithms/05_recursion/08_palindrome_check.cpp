#include <iostream>
using namespace std;

/*
Check Palindrome using Recursion
*/

bool palindrome(string s,int start,int end)
{
    if(start>=end)
        return true;

    if(s[start]!=s[end])
        return false;

    return palindrome(s,start+1,end-1);
}

int main()
{
    string s="madam";

    if(palindrome(s,0,s.size()-1))
        cout<<"Palindrome";
}