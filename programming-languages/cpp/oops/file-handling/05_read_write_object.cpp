#include <iostream>
#include <fstream>
using namespace std;

class Student {

public:
    int id;
    char name[50];
};

int main() {

    Student s = {1, "Rahul"};

    ofstream file("student.txt");

    file << s.id << " " << s.name;

    file.close();
}

///Used in:
// Student  Management System
//Employee recors