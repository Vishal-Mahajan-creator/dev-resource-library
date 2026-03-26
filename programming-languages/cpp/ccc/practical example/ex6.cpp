#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int a[5] = {1, 2, 3, 4, 5};
   
    cout << "Single dimentional:-\n";               
    for (int i = 0; i < 5;i++)
    {
        
        cout << a[i];
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";

    int b[2][3] = {{1,2,3},{1, 2, 3}};
    cout << "Multi dimentional:-\n"; 
    for (int j = 0; j <2;j++)
    {
        for (int k = 0; k <3;k++)
        {
        cout << b[j][k]<<"      ";
        }
        cout << "\n";
    }
    
    return 0;
}