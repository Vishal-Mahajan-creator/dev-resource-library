#include<iostream>
using namespace std;

class Car
{
    private:
        string company;
        string model;
        int year;

    public:
    void car(string c,string m,int y)
    {
        company=c;
        model=m;
        year=y;
    }
    void show(){
        cout << "Company name is " << company;
        cout << "\nmodel  name is " << model;
        cout << "\nYear   is " << year;
    }
   
};
int main()
{
    system("cls");
    Car c;
    c.car("BMW","Luxery",20 );
    c.show();
    return 0;
}
