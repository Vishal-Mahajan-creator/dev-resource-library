#include<iostream>
using namespace std;
 
class Vishal{
    public:
    int no;
    string name;

    void set(){
        cout<<"Enter no:-";
        cin>>no;
        cout << "Enter name:-";
        cin>>name;
        cout << "\n";
    }
    void show(){
        cout<<"Number is:-"<<no<<endl;
        cout<<"Name:-"<<name<<endl;

    }
};
int main(){
    Vishal m1[2];
    for (int i = 1; i <= 2;i++)
    {
        m1[i].set();
    }
    for (int j = 1; j <= 2;j++)
    {
        m1[j].show();
    }
        return 0;
}