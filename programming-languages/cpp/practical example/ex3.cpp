//WAP to check eligibal for votinf or not
#include<iostream>
using namespace std;



int main()
{
    system("cls");
    int age;
    cout<<"Enter yor age:-";
    cin >> age;
    cout << "\n";
    if (age>=18 )
    {
        cout<<"You are eligibale for voting";

    }
   
    else  
    {
        cout<<"You are not eligibale for voting";
    }
   
    return 0;
}