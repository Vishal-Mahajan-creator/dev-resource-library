/*
=====================================
C++ CONTROL STATEMENTS
=====================================

Topics:
1. Decision Making
2. Loops
3. Break & Continue
*/

#include <iostream>
using namespace std;

int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    // ---------- IF ----------
    if(number > 0) {
        cout << "Positive Number" << endl;
    }

    // ---------- IF ELSE ----------
    if(number % 2 == 0)
        cout << "Even Number" << endl;
    else
        cout << "Odd Number" << endl;

    // ---------- ELSE IF LADDER ----------
    if(number >= 90)
        cout << "Grade A" << endl;
    else if(number >= 70)
        cout << "Grade B" << endl;
    else
        cout << "Grade C" << endl;

    // ---------- SWITCH ----------
    int day;

    cout << "Enter day (1-3): ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        default:
            cout << "Invalid Day";
    }

    // ---------- FOR LOOP ----------
    cout << "\nFor Loop:" << endl;
    for(int i=1;i<=5;i++) {
        cout << i << " ";
    }

    // ---------- WHILE LOOP ----------
    cout << "\nWhile Loop:" << endl;
    int i=1;
    while(i<=3) {
        cout << i << " ";
        i++;
    }

    // ---------- DO WHILE ----------
    cout << "\nDo While Loop:" << endl;
    int j=1;
    do {
        cout << j << " ";
        j++;
    } while(j<=3);

    // ---------- BREAK & CONTINUE ----------
    cout << "\nBreak & Continue:" << endl;

    for(int k=1;k<=5;k++) {

        if(k==3)
            continue;

        if(k==5)
            break;

        cout << k << " ";
    }

    return 0;
}