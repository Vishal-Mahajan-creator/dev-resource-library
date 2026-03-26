/*
Read Only Data
*/

#include <iostream>
using namespace std;

class College {

private:
    string name = "Engineering College";

public:
    string getName() const {
        return name;
    }
};

int main() {

    College c;

    cout << c.getName();
}