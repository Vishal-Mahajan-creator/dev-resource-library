#include <iostream>
using namespace std;

class Demo {

public:
    int* data;

    Demo(int v) {
        data = new int(v);
    }

    Demo& operator=(Demo &obj) {

        if(this != &obj) {
            delete data;
            data = new int(*obj.data);
        }
        return *this;
    }

    ~Demo() {
        delete data;
    }
};

int main() {

    Demo d1(10);
    Demo d2(20);

    d2 = d1;
}