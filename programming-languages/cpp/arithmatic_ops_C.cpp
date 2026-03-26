#include<iostream>
#include<cmath>
using namespace std;
class Opration{
    public:
    float a, b, add,mul,sub,div,exp,mod;
    Opration(){
        cout<<"Enter first no:-";
        cin >> a;
        cout<<"Enter second no:-";
        cin >> b;
        cout << "\n\nperformr Multipal Arithmatic operation\n";
       
        add=a+b;
        mul=a*b;
        sub=a-b;
        div=a/b;
        exp = pow(a, b);    
        mod = fmod(a, b);

        cout<<"Addition is:-"<<add<<endl;
        cout<<"Multiplication is:-"<<mul<<endl;     
        cout<<"Substraction is:-"<<sub<<endl;     
        cout<<"Divistion is:-"<<div<<endl;  
        cout<<"Exponant is:-"<<exp<<endl;   
        cout<<"Module is:-"<<mod<<endl;   

    }
};
int main(){
    Opration o;
    return 0;
}