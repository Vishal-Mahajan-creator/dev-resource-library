#include <iostream>
using namespace std;

class Person {

public:
    string name;

    Person(string n) {
        name = n;
    }

    friend ostream& operator<<(ostream &out, Person p);
};

ostream& operator<<(ostream &out, Person p) {
    out << p.name;
    return out;
}

int main() {

    Person p("Rahul");

    cout << p;
}