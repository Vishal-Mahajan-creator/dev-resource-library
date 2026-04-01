#include <iostream>
using namespace std;

/*
Generate all subsets
Concept used in Backtracking
*/

void subset(string s,string current,int index)
{
    if(index==s.length())
    {
        cout<<current<<endl;
        return;
    }

    // include character
    subset(s,current+s[index],index+1);

    // exclude character
    subset(s,current,index+1);
}

int main()
{
    subset("abc","",0);
}