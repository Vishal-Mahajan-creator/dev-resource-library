#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("data.txt");

    file << "Hello File Handling\n";
    file << "Learning C++";

    file.close();

    cout << "Data Written Successfully";
}