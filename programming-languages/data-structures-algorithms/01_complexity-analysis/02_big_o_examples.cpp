#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    // O(1) — Constant Time
    cout << "O(1): " << arr[0] << endl;

    // O(n) — Linear Time
    cout << "O(n): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // O(n^2) — Quadratic Time (Nested Loops)
    cout << "O(n^2): ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
    }
    cout << endl;

    // O(log n) — Logarithmic Time (Binary Search style)
    cout << "O(log n): ";
    int m = n;
    while (m > 1) {
        m /= 2;
        cout << m << " ";
    }
    cout << endl;

    // O(n log n) — Example: Merge Sort (simplified)
    // Just a placeholder loop to show complexity
    cout << "O(n log n): ";
    for (int i = 0; i < n; i++) {
        int m = n;
        while (m > 1) {
            m /= 2;
            cout << i << "-" << m << " ";
        }
    }
    cout << endl;

    // O(2^n) — Exponential Time (Recursive subset generation)
    cout << "O(2^n): ";
    int subsets = 1 << n; // 2^n
    for (int mask = 0; mask < subsets; mask++) {
        cout << "{";
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) cout << arr[i] << " ";
        }
        cout << "} ";
    }
    cout << endl;

    // O(n!) — Factorial Time (Permutations)
    // Using STL next_permutation
    cout << "O(n!): ";
    vector<int> perm = arr;
    do {
        cout << "[";
        for (int x : perm) cout << x << " ";
        cout << "] ";
    } while (next_permutation(perm.begin(), perm.end()));
    cout << endl;

    return 0;
}
