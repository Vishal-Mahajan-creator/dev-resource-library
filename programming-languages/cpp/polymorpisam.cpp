#include<iostream>
using namespace std;

class Ope{
    public:
    void f1(int a,int b){
      cout<<"The addition is:-" <<a+b<<endl;
    
    }
    void f1(float a,float b)
    {
       cout<<"\nThe addition is:-" <<a+b;
    } 
};
int main(){
    system("cls");
    Ope o1;
    o1.f1(10,20);
    o1.f1(50.4345f,30.67f);
    return 0;
}