#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int i : v)
        cout << i << " ";
}

// Dynamic array.

// Important Functions
// push_back()
// pop_back()
// size()
// empty()
// front()
// back()
// Dynamic Nature
// v.push_back(40);

// Automatically resizes memory.