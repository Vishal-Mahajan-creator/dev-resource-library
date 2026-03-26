#include<iostream>
using namespace std;

class ClassA
{
    public:
        int add;
        void sound(int a, int b)
        {
            cout << "hello A\n";
            cout << "addition is : " << a + b;
        }
};
class ClassB: virtual  public ClassA
{

public:
using ClassA ::sound;

    int sub;
    void sound(int a, int b)
    {
        cout << "\nhello B\n";
        cout << "subtraction is " << a - b;
    }
};
int main()
{
    system("cls");

    ClassB ca;
    ca.sound(30,10);
    ca.sound(30,20);

    return 0;
}