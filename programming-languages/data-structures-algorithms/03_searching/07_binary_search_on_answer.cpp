#include <bits/stdc++.h>
using namespace std;

/*
Binary Search on Answer Space
--------------------------------
Instead of searching in an array, we search in the "range of possible answers".
We repeatedly check if a candidate answer (mid) is feasible using a helper function.
If possible → move left (try smaller answers).
If not possible → move right (try larger answers).
*/

// Example Problem: Minimum capacity to ship packages within D days

bool possible(vector<int>& weights, int days, int capacity) {
    int usedDays = 1;   // start with day 1
    int currentLoad = 0;

    for (int w : weights) {
        if (w > capacity) return false; // single item exceeds capacity
        if (currentLoad + w > capacity) {
            usedDays++;          // need new day
            currentLoad = w;     // reset load
        } else {
            currentLoad += w;
        }
    }
    return usedDays <= days;
}

int minCapacity(vector<int>& weights, int days) {
    int low = *max_element(weights.begin(), weights.end()); // minimum possible
    int high = accumulate(weights.begin(), weights.end(), 0); // maximum possible
    int ans = high;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (possible(weights, days, mid)) {
            ans = mid;       // feasible → try smaller
            high = mid - 1;
        } else {
            low = mid + 1;   // not feasible → try larger
        }
    }
    return ans;
}

int main() {
    vector<int> weights = {10, 20, 30, 40};
    int days = 2;

    cout << "Minimum capacity required = " << minCapacity(weights, days) << endl;
    return 0;
}
