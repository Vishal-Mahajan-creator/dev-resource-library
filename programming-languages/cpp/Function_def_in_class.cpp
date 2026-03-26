#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length, breadth;
    public:
Rectangle(int l,int b){
    length= l;
    breadth = b;
}
int area(){
    return length * breadth;
}
};
int main(){
    system("cls");
    Rectangle r(12,16);
    cout << "Area of rectangle is:-" << r.area();
    return 0;
}