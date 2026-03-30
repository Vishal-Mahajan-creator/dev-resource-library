#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {

    vector<int> v = {10,5,30};

    cout << *min_element(v.begin(), v.end());
    cout << *max_element(v.begin(), v.end());
}