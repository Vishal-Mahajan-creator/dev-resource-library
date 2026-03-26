#include<iostream>
using namespace std;

class ClassA
{
    public:
    void sub(int a,int b)
    {
        int d = a - b;
        cout << "\nThe substraction is :- " << d;
    }
    void sub(int a,int b, int c)
    {
        cout << "this method overide the prious method\n";
         int e = a + b +c;
        cout << "\nThe substraction is:- " << e;
    }
};
int main()
{
    system("cls");
    ClassA cA;
    cA.sub(30,10);
   cA.sub(10,10,0);

    
    return 0;
}
