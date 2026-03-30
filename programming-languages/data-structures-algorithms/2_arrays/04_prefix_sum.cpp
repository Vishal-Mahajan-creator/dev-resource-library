#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int n = 5;

    int prefix[5];

    prefix[0] = arr[0];

    for(int i=1;i<n;i++)
        prefix[i] = prefix[i-1] + arr[i];

    int L=1, R=3;

    cout << prefix[R] - prefix[L-1];
}

// Used in:

// Range queries
// Competitive programming
// Analytics systems