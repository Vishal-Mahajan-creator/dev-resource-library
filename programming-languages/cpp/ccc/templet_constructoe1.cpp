#include<iostream>
using namespace std;

template <typename C,typename D>
class Box
{
    public:
    C value;
    D pair;

    Box(C v,D d)
    {
        value=v;
        pair = d;
    }
    void show()
    {
        cout << "Value:-" << value<<" " << pair<< "\n";
        //cout << "pair" << pair << pair<< "\n";
    }

};
int main()
{
    Box<int,int> intBoX(56,423);
    Box<string,string> strBoX("Hello ","World!");
    
    intBoX.show();
    strBoX.show();
    return 0;
}