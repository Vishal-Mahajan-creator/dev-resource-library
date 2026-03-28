#include <iostream>
using namespace std;

class Counter {

public:
    int count;

    Counter(int c) { count = c; }

    void operator++() {
        count++;
    }
};

int main() {

    Counter c(5);

    ++c;

    cout << c.count;
}