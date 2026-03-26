#include<iostream>
using namespace std;
int main(){

    int a, b, result;
    int choice;
    cout<<"Enter first no:-";
    cin >> a;
    cout<<"Enter second no:-";
    cin >> b;
    do {
    cout << "\n\nTo performr Multipal Arithmatic operation\nEnter your choice\n\n";
    cout<<"1.Addtion\n";
    cout<<"2.Multiplication\n";
    cout<<"3.Substraction\n";
    cout<<"4.Division\n\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case  1:
    result=a+b;
    cout<<"Addition is:-"<<result<<endl; 
        break;
    case  2:
    result=a*b;
    cout<<"Multiplication is:-"<<result<<endl;     
        break;
    case  3:
    result=a-b;
    cout<<"Substraction is:-"<<result<<endl;     
        break;
    case  4:
    result=a+b;
    cout<<"Divistion is:-"<<result<<endl;     
        break;
   
    default:
        cout << "Enter valid choice!";
        break;
    }
} while (choice != 5);

  
    return 0;
}