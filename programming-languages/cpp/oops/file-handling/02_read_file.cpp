#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream file("data.txt");

    string line;

    while(getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

// Important Function
// getline(file, variable)

// Reads complete line.