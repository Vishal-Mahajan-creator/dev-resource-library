#include<iostream>
using namespace std;
class Vishal
{
    public:
        int x;
        Vishal(int b){
            x = b;
            cout<<"Parameterize constructar X="<<x<<endl;

        }
};
int main(){
    Vishal V(30);
    return 0;
}
