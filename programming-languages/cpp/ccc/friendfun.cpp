#include<iostream>
using namespace std;
class All{
private:
    float r;

public:
    All() : r(0){}
    friend void area(All obj);
};

void area(All obj){
    float area_of_circle;
    cout << "\n\nEnter radius for Area of circle:-";
    cin >> obj.r;
    area_of_circle= 3.14 * obj.r*obj.r;
    cout << " Area of circle is:-" << area_of_circle;

}

int main(){
    All a;
    area(a);
    return 0;
}