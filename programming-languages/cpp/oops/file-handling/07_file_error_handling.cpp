#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream file("data.txt");

    if(!file) {
        cout << "File not found!";
        return 1;
    }

    cout << "File opened successfully";
}