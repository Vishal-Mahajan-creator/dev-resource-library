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

    ofstream file("student.dat", ios::binary);

    file.write((char*)&s, sizeof(s));

    file.close();
}

// Binary files store data in a format that is not human-readable. They are more efficient for reading and writing large amounts of data, and they preserve the exact structure of the data.    

//Binary files store raw memory.

// Faster + smaller.

// Reading Binary File
// ifstream file("student.dat", ios::binary);

// Student s;

// file.read((char*)&s, sizeof(s));