#include<iostream>
using namespace std;

//default constructr
class ClassA
{
    public:
    ClassA()
    {
        cout << "This is default constructor";
    }
};

class ClassB
{
    public:
    ClassB(int a,int b)
    {
        cout << "\n\nThis parameterise constructr";
        int sum = a + b;
        cout << "\nThe Addition is:- "<<sum;
    }
};
int main()
{
    system("cls");
    ClassA ca;

    ClassB cb(10,20);

    return 0;
}