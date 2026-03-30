#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {5,2,8,1};

    sort(v.begin(), v.end());

    if(find(v.begin(), v.end(), 8) != v.end())
        cout << "Found";
}