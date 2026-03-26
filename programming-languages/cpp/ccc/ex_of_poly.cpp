#include<iostream>
using namespace std;

class Animal
{
    public:
    void animal()
    {
        cout << "Animal make Sound\n";
    }
    virtual void sound()
    {
        cout << "Each animal sound different\n";
    }
};
class Cat:public Animal
{
    public:
    void cat()
    {
        cout << " mewo\n";

    }
    void sound() 
    {
        cout << "cat mewo\n\n";
    }
};
class Dog:public Animal
{
    public:
    void dog()
    {
        cout << " barks\n";
    }
    void sound()
    {
        cout << "dog barks\n\n";
    }
};
int main()
{
    system("cls");
    
    Animal *a;
    a=new Cat();
    a->animal();
    a->sound();

    a=new Dog();
    a->animal();
    a->sound();

    Animal b;
    b.animal();
    b.sound();

    Cat c;
    c.cat();
    c.sound();

    return 0;
}