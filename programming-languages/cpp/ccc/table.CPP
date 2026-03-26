#include<iostream>
using namespace std;
class Table{
    public : 
    int a,n;
    Table(){
        cout << "Enter the number:-";
        cin >> a;
        
        cout << "The given number table is as follows"<<endl;

        for (int i = 1; i<= 10;i++){
            n=i*a;
            cout<<a<<"*"<<i<<"="<<n<<endl;

        }
    
    }
};
int main(){
    Table t;
    return 0;
}