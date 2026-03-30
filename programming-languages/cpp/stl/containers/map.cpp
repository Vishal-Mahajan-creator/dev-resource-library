#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int,string> m;

    m[1] = "Rahul";
    m[2] = "Amit";

    for(auto x : m)
        cout << x.first << " " << x.second << endl;
}