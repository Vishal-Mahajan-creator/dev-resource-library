/*
Static Data Member
*/

#include <iostream>
using namespace std;

class Student {

public:
    string name;

    static string college; // shared variable
};

// definition outside class
string Student::college = "ABC Engineering";

int main() {

    Student s1, s2;

    s1.name = "Rahul";
    s2.name = "Amit";

    cout << s1.college << endl;
    cout << s2.college << endl;
}