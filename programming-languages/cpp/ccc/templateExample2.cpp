#include<iostream>
using namespace std;

template <typename A,typename B>
class Ops
{
    public:
    A add;
    B show;
    Ops(A a,B b)
    {
        add = a;
        show = b;
    }
    void display()
    {
        cout << "Add:- " << add << "  Show:- " << show;
        cout << "\n";
    }

};
int main()
{
    system("cls");
    Ops<string, int> x("vishal ", 01);
    Ops<float, char> y(1331.321, 'a');

    x.display();
    y.display();


    return 0;
}