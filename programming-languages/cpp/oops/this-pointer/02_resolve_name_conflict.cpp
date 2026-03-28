#include <iostream>
using namespace std;

class Student {

private:
    int age;

public:
    void setAge(int age) {
        this->age = age;
    }

    void display() {
        cout << age;
    }
};

int main() {

    Student s;
    s.setAge(21);
    s.display();
}