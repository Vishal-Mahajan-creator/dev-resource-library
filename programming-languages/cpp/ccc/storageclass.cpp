#include<iostream>
using namespace std;
void d1(){
    static int x = 1;
    
    if(x<=50)
    {
    cout <<"  " <<x ;
    x++;
    d1();
    }
}
int main(){
    d1();
    return 0;
}