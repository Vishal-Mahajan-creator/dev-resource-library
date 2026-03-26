#include<iostream>
#include<cmath>
#include <iomanip>

using namespace std;

int main(){
    system("cls");
    float n;
    int power=3;
    cout << "Enter no:-";
    cin >> n;
    float result = pow(n,power);
    cout << "Cube of " << n << " is:-" << result;

    float cuberoot = cbrt(n);
    cout << "\nCube root of " << n << " is:-"<<cuberoot  ;

    
    int power1=2;
    float result1 = pow(n,power1);
    cout << "\n\nSquare of " << n << " is:-" << result1;

    float square_root = sqrt(n);
    cout << "\nSquare root of " << n << " is:-" << square_root;

    return 0;
}


