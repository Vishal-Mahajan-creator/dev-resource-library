#include<iostream>
using namespace std;
class ClassD;
class ClassC;
class ClassB;
class ClassA{
    private:
        float l;
    public:
    ClassA():l(12){}
    friend int area_of_rectangle(ClassA, ClassB);
    friend int area_of_triangle(ClassA, ClassB,ClassC);

};
class ClassB{
    private:
        float b;
    public:
    ClassB():b(16){}
    friend int area_of_rectangle(ClassA, ClassB);
    friend int area_of_triangle(ClassA, ClassB,ClassC);

};
class ClassC{
    private:
        float h;
    public:
    ClassC():h(18){}
    friend int area_of_triangle(ClassA, ClassB,ClassC);
};
class ClassD{
    private:
    float side;
    public:
    ClassD():side(18.5){}
    friend int area_of_square(ClassD);
};
int area_of_rectangle(ClassA objA, ClassB objB){

    return objA.l* objB.b;
}
int area_of_triangle(ClassA objA, ClassB objB, ClassC objC){

    return 0.5* objA.l* objB.b*objC.h;
}
int area_of_square(ClassD objD){
    return objD.side * objD.side;
}

int main(){
    ClassA A;
    ClassB B;
    ClassC C;
    ClassD D;
    cout << "Area of rectangle:-"<<area_of_rectangle(A,B)<<endl;
    cout << "Area of triangle:-"<<area_of_triangle(A,B,C)<<endl;
    cout << "Area of Square:-"<<area_of_square(D)<<endl;


        return 0;
}
