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

// File modes control behavior.

// ios::out   → Write
// ios::in    → Read
// ios::app   → Append
// ios::binary→ Binary file
// ios::trunc → Delete old content

// Example:

// ofstream file("data.txt", ios::out | ios::app);