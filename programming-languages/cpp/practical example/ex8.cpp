#include<iostream>
using namespace std;

class ClassA
{
    public:
    void classA()
    {
        cout << "This is class A";
    }
};
class ClassB:public ClassA
{
    public:
    void classB()
    {
        cout << "This is class B";
    }
};
class ClassC: public ClassB
{
    public:
    void classC()
    {
        cout << "This is class C";
    }
};
class ClassD: public ClassC
{
    public:
    void classD()
    {
        cout << "This is class D";
    }
};
class ClassE: public ClassC
{
    public:
    void classE()
    {
        cout << "This is class E";
    }
};
int main()
{
    system("cls");
    ClassE ce;
    ce.classA();
    
    return 0;
}
