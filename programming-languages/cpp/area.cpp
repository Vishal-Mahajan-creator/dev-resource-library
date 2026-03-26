#include<iostream>
using namespace std;
class Area{
    public :
        float area_of_circle,area_of_Square,area_of_triangle;
        float  pai = 3.14;
    Area(float r=0,float s=0,float b=0,float h=0){
        cout << "\n\nEnter radius for Area of circle:-";
        cin >> r;
        area_of_circle = pai * r * r;
        cout << " Area of circle is:-"<<area_of_circle;

        cout << "\n\nEnter Side for Area of Square:-";
        cin >> s;
        area_of_Square = s * s;
        cout << " Area of Square is:-"<<area_of_Square;

        cout << "\n\nEnter base and height for Area of Trangle:-";
        cin >> b>>h;
        area_of_triangle = 0.5 * b * h;
        cout << " Area of trangle is:-"<<area_of_triangle;

    }
};
int main(){
    Area a;
    return 0;
}