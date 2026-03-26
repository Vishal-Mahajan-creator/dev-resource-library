#include<iostream>
using namespace std;
class ClassB;
class ClassA{
    private:
        int numA;
    public:
    ClassA():numA(10){}
    friend int addition(ClassA, ClassB);
};
class ClassB{
    private:
        int numB;
    public:
    ClassB():numB(20){}
    friend int addition(ClassA, ClassB);
};
int addition(ClassA objA, ClassB objB){
    return objA.numA + objB.numB;
}
int main(){
    ClassA A;
    ClassB B;
    cout << "Sum:-"<<addition(A,B)<<endl;
        return 0;
}
