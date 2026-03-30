#include <iostream>
using namespace std;

// Linear Search Function
int search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;   // Found at position i
    }
    return -1;          // Not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 30; // Example key
    int pos = search(arr, n, key);

    if (pos != -1)
        cout << "Element found at index " << pos << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}


// Case Analysis

// Example: Searching element.

// Case	Meaning
// Best	Found immediately
// Average	Somewhere middle
// Worst	Last position