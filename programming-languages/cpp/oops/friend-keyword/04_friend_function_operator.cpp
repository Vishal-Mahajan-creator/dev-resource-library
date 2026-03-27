#include <iostream>
using namespace std;

class Distance {

private:
    int meter;

public:
    Distance(int m) {
        meter = m;
    }

    friend Distance add(Distance d1, Distance d2);
};

Distance add(Distance d1, Distance d2) {
    return Distance(d1.meter + d2.meter);
}

int main() {

    Distance d1(5), d2(10);

    Distance result = add(d1, d2);

}