#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("data.txt", ios::app);

    file << "\nNew Data Added";

    file.close();
}