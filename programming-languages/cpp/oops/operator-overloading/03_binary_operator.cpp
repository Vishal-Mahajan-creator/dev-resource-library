#include <iostream>
using namespace std;

class Distance {

public:
    int meter;

    Distance(int m) {
        meter = m;
    }

    Distance operator-(Distance d) {
        return Distance(meter - d.meter);
    }
};

int main() {

    Distance d1(50), d2(20);

    Distance d3 = d1 - d2;

    cout << d3.meter;
}