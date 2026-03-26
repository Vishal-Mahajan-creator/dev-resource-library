//WAP for finding grade using if-else lader
#include<iostream>
using namespace std;



int main()
{
    system("cls");
    int marks;
    cout<<"Enter yor marks to display grade:-";
    cin >> marks;
    cout << "\n";
    if (marks>=90)
    {
        cout<<"You have A+ grade";

    }
    else if (marks>=70 && marks<90)
    {
        cout<<"You have B+ grade";
    }
    else if(marks>=50 && marks<70)
    {
        cout<<"You have c+ grade";
    }
    else 
    {
        cout<<"You are fail";
    }
    return 0;
}