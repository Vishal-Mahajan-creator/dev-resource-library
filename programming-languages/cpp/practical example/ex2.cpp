//Give remark basis of grade using decision making satement
#include<iostream>
using namespace std;



int main()
{
    system("cls");
    char grade;
    cout<<"Enter yor grade:-";
    cin >> grade;
    cout << "\n";

    switch (grade)
    {
    case 'a':
    cout<<"Your grade is exelent";
        break;

    case 'A':

    cout<<"Your grade is exelent";
        break;

    case 'b':
    cout<<"Your grade is good";
        break;

    case 'B':
    cout<<"Your grade is good";
            break;

    case 'c':
    cout<<"You  need to improve";
        break;
        
    case 'C':
    cout<<"You  need to improve";
        break;  
    default:
    cout<<"You are fail";

        break;
    }
  
    return 0;
}
