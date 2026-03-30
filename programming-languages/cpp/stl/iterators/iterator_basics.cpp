#include <iostream>
#include <vector>
using namespace std;

int main() {

    // vector<int> v = {1,2,3};
     vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++)
        cout << *it;
}

// Iterator = pointer-like object.

// ⚙️ ALGORITHMS

// Include:

// #include <algorithm>