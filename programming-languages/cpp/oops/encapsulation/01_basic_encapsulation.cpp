/*
Basic Encapsulation
*/

#include <iostream>
using namespace std;

class Student {

private:
    int marks;   // hidden data

public:
    void setMarks(int m) {
        marks = m;
    }

    void display() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    Student s;

    s.setMarks(85);
    s.display();
}