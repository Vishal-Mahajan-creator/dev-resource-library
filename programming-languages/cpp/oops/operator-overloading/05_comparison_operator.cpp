#include <iostream>
using namespace std;

class Student {

public:
    int marks;

    Student(int m) {
        marks = m;
    }

    bool operator==(Student s) {
        return marks == s.marks;
    }
};

int main() {

    Student s1(90), s2(90);

    if(s1 == s2)
        cout << "Equal";
}