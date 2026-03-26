#include<iostream>
#include <cmath> 
using namespace std;

class Circle
{
    private:
        float radius;
        float area;
        public:
    void getarea(){
        cout << "Enter radius:-";
        cin >> radius;
    }
    void area_of_circle()
    {
        area = 3.14 * radius * radius;
        cout << "\nArea of circle is:-"<<area;
    }
};
class Simple_interest
{
    private:
        float P; // Principal_amt
        float R;//rate of intrest
        int N;//noumber of days
        float SI;//Simple Interest

    public:
        void getvalue()
        {
            cout<<"\n\nEnter Principal amoutnt:-";
            cin >> P;
            cout<<"\nEnter Rate of intrest:-";
            cin >> R;
            cout<<"\nEnter Number of days:-";
            cin >> N;
        }
        void simple_interest()
        {
            SI = (P * R * N) / 100;
            cout<<"\nThe Simple interet is:-"<<SI;

        }
};

class Compound_Interest
{
    private:
        float P; // Principal_amt
        float R;//rate of intrest
        int N;//noumber of days
        float T;//Time (in Years)
        float CI;//Simple Interest

    public:
        void getvalue()
        {
            cout<<"\n\nEnter Principal amoutnt:-";
            cin >> P;
            cout<<"\nEnter Rate of intrest:-";
            cin >> R;
            cout<<"\nEnter Number of days:-";
            cin >> N;
            cout<<"\nEnter Time (in Years):-";
            cin >> T;
        }
        void compound_Interest() {
            float A = P * pow((1 + R / (100 * N)), N * T);
            CI = A - P;
            cout << "\nThe Compound Interest is: " << CI << endl;
            cout << "The Total Amount after " << T << " years is: " << A << endl;
        }
};

int main()
{
    system("cls");
    //area of circle
    Circle c;
    c.getarea();
    c.area_of_circle();

    //Simple Interest
    Simple_interest si;
    si.getvalue();
    si.simple_interest();

    //Compound Interest
    Compound_Interest ci;
    ci.getvalue();
    ci.compound_Interest();

    return 0;
}