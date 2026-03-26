#include <iostream>
using namespace std;

class User {

private:
    int age;

public:
    void setAge(int a) {

        if(a >= 18)
            age = a;
        else
            cout << "Invalid Age\n";
    }

    void showAge() {
        cout << age;
    }
};

int main() {

    User u;

    u.setAge(15);
    u.setAge(22);

    u.showAge();
}