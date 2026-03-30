#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {

    vector<int> v = {1,2,2,3};

    cout << count(v.begin(), v.end(), 2);

    reverse(v.begin(), v.end());
}