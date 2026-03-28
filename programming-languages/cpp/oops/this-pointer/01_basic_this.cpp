/*
Basic this pointer example
*/

#include <iostream>
using namespace std;

class Student {

public:
    int age;

    void showAddress() {
        cout << "Object Address: " << this << endl;
    }
};

int main() {

    Student s1;

    cout << "Main Address: " << &s1 << endl;

    s1.showAddress();
}