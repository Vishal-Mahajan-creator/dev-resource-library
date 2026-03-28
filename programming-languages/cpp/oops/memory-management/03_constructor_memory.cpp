#include <iostream>
using namespace std;

class Student {

private:
    int* marks;

public:
    Student() {
        marks = new int;
        *marks = 90;
    }

    void show() {
        cout << *marks;
    }

    ~Student() {
        delete marks;
    }
};

int main() {

    Student s;
    s.show();
}