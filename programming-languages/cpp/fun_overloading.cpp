#include<iostream>
using namespace std;

class ClassA{
    public:
        void add(int a,float b)
        {
            int d = a + b;
            cout << "The addition of two number is:-" << d;
        }
        void add(int a,float b,int c)
        {
            float e = a + b+c;
            cout << "\n\nThe addition of three number is:-" << e;
        }
};
int main()
{
    system("cls");
    ClassA a;
    a.add(10,20);
    a.add(10,20.165,30);
    

    return 0;
}