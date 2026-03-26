#include<iostream>
using namespace std;

//multilevel+hirachical 
class A{
    public:
        void a() {
            cout << "Example of multilevel + hirachical inheritance" << endl;
            cout << "this is class A" << endl;
        }
};
class B:public A{
    public:
        void b() {
            cout << "this is class b" << endl;
        }
};
class C:public B{
    public:
        void c() {
            cout << "this is class c" << endl;
        }
};
class D : public C{
    public:
        void d() {
            cout << "this is class d" << endl;
        }
};
class E : public C{
    public:
        void e() {
            cout << "this is class e" << endl;
        }
};

//MUltipal + Multilevel 
class F{
    public:
        void f() {
            cout << "\n\nExample of MUltipal + Multilevel  inheritance" << endl;

            cout << "this is class F" << endl;
        }
};
class I{
    public:
        void i() {
            cout << "this is class I" << endl;
        }
};
class J : public F,public I{
    public:
        void j() {
            cout << "this is class J" << endl;
        }
};
class K: public J{
    public:
        void k() {
            cout << "this is class K" << endl;
        }
};
class L: public K{
    public:
        void l() {
            cout << "this is class L" << endl;
        }
};

//hierachical + multipal
class M{
    public:
        void m() {
            cout << "\n\nExample of hierachical + multipal  inheritance" << endl;

            cout << "this is class M" << endl;
        }
};
class N:public M{
    public:
        void n() {
            cout << "this is class N" << endl;
        }
};
class O : public M{
    public:
        void o() {
            cout << "this is class O" << endl;
        }
};
class P:public O,public N{
    public:
        void p() {
            cout << "this is class p" << endl;
        }
};
int main(){
    system("cls");
    //multilevel+hirachical 
    C c1;
    c1.a();
    c1.b();
    c1.c();

    E e1;
    e1.c();

    D d1;
    d1.c();

    //MUltipal + Multilevel
    J j1;
    j1.j();
    j1.f();
    j1.i();

    //hierachical + multipal
    N n1;
    n1.m();
    P p1;
    p1.n();
    p1.o();

    return 0;
}