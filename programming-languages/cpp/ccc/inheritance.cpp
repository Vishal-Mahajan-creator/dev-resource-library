#include<iostream>

using namespace std;
//single inheritance
class Animal{
public:
void sound(){
    cout << "Single inheritance"<<endl;
    cout << "This is parent class" << endl;
}
};
class Dog:public Animal{
public:
void bark(){
    cout << "Thi is child class\n\n";
}
};

//Multilevel inheritance
class BBA{
    public:
    void bba(){
        cout << "This is BBA department." << endl;
    }
};
class BBA_CA:public BBA{
    public:
    void bba_ca(){
        cout << "This is BBA(CA) Department," << endl;
    }
};
class BCA:public BBA_CA{
    public:
    void bca(){
        cout << "This is BCA Department," << endl;
    }
};
class BVOK:public BCA{
    public:
    void bvok(){
        cout << "This is B VOK Department," << endl;
    }
};
class College:public BVOK{
    public:
    void college(){
        cout << "Multilevel inheritance"<<endl;
        cout << "This is Head office Department," << endl;
    }
};
//example 1 of Multilevel inheritance
class Grandparent{
    public:
    void grandparent(){
        cout << "\n\nExample 1 Multilevel inheritance"<<endl;

        cout << "This is grand parent class"<<endl;

    }
};
class Parent:public Grandparent{
    public:
    void parent(){
        cout << "This is Parent class"<<endl;
    }
};
class Child:public Parent{
    public:
    void child(){
        cout << "This is Child class"<<endl;
    }
};

/* //example 2 of Multilevel inheritance
class Addition{
    public:
        int a, b,c;

    public:
    void addition(){
        cout << "\n\nExample 2 Multilevel inheritance"<<endl;
        cout<<"Enter two number to perform Arithmatic operation:-";
        cin >> a >> b;
        c = a + b;
        cout << "Addition of "<<a<<" And "<<b<<" is:-"<<c <<endl;

    }
};
class Subtractin:public Addition{
    public:
    void subtractin(){
        c = a - b;
        cout << "Subtractin of "<<a<<" And "<<b<<" is:-"<<c <<endl;

    }
};
class Multiplication:public Subtractin{
    public:
    void multiplication(){
        c = a * b;
        cout << "Multiplication of "<<a<<" And "<<b<<" is:-"<<c <<endl;

    }
};
class Operation:public Multiplication{
    public:
    void operation(){
        
        cout << "The operation of given number as follows" <<endl;

    }
};*/


//hirachical inheritance
class Superclass{
public:
void superclass(){
    cout << "\n\n Hirachical inheritance"<<endl;

    cout<<"\n\nThs is super class"<<endl;
}
};
class Deriv1:public Superclass{
  public :
  void derive1(){
      cout << "This is derive class 1" << endl;

  }
};
class Deriv2:public Superclass{
    public :
    void derive2(){
        cout << "This is derive class 2" << endl;
        
    }
  };

  //multipal inheritance
  class Parent1{
      public:
          int a;

      public:
          void parent1()
          {
            cout << "\n\nExample of Multipal inheritance"<<endl;
            cout<<"Enter number :-";
            cin >> a;
            a +=a;
            cout << "Addition of is:-"<<a <<endl;
    
          }
  };
  class Parent2{
    public:
        int b;

    public:
        void parent2()
        {
          cout << "\n\nExample of Multipal inheritance"<<endl;
          cout<<"Enter number :-";
          cin >> b;
          b -=b;
          cout << "Addition of is:-"<<b <<endl;
  
        }
};
class Parent3{
    public:
        int c;

    public:
        void parent3()
        {
          cout << "\n\nExample of Multipal inheritance"<<endl;
          cout<<"Enter number :-";
          cin >> c;
          c *=c;
          cout << "Addition of is:-"<<c <<endl;
  
        }
};
class Child1:public Parent1,public Parent2,public Parent3{
    public:
    void child1(){
        cout << "Let see the opration" <<endl;
    }
};
int main(){
    system("cls");
    //single 
    Dog d;
    d.sound( );
    d.bark( );

    //mutilevel
    College c;
    c.college();
    c.bba();
    c.bba_ca();
    c.bca();
    c.bvok();

    //example 1 of Multilevel inheritance
    Child c1;
    c1.grandparent();
    c1.parent();
    c1.child();

   /* //example 2 of Multilevel inheritance
    Operation o;
    o.operation();
    o.addition();
    o.subtractin();
    o.multiplication();*/

    //hierachical
    Deriv1 d1;
    d1.superclass();
    d1.derive1();

      //multipal inheritance
    Child1 y;
    y.parent1();
    y.parent2();
    y.parent3();

    return 0;
}