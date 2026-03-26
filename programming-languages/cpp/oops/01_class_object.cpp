/*
=====================================
Class and Object
=====================================
*/

#include <iostream>
using namespace std;

// Class Definition
class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {

    // Object Creation
    Student s1;

    s1.name = "Rahul";
    s1.age = 21;

    s1.display();

    return 0;
}