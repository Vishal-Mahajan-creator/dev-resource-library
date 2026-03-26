#include<iostream>
#include <string>
using namespace std;

template <typename T>
T add(T a,T b)
{
  
    return a + b;
}
int main()
{                                      
    system ("cls");
    cout << "Add:=" << add<float>(12.21, 322.423);
    cout << "\nAdd:=" << add<string>("vishal ", "mahajan");

    return 0;
}