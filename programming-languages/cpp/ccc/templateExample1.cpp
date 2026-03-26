#include<iostream>
#include <string>

using namespace std;

template <typename C>
class Box
{
    public:
    C value;
    Box(C v)
    {
        value=v;
    }
    void show()
    {
        cout << "Value" << value << "\n";
    }

};
int main()
{
    system("cls");
    Box<int>intBoX(50.4);
    Box<string>strBoX("Hello");
    
    intBoX.show();
    strBoX.show();

    return 0;
}