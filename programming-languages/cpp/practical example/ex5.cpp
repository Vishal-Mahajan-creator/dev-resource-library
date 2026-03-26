#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int m=10;
    cout <<m;
    int *ptr=&m;
        *ptr=12;
    cout << "\n";
    cout << ptr;
    cout << "\n";
    cout << *ptr;
    return 0;
}