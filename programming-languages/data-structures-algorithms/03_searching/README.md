🔍 Searching Concepts
✔ Linear Search
✔ Binary Search
✔ Recursive Search
✔ Lower/Upper Bound
✔ Rotated Array Search
✔ Binary Search on Answer

🌟 Golden Rule
Binary Search works only on sorted space.  
That space can be:

A sorted array

A monotonic function (YES/NO feasibility)

A range of possible answers

🧠 Interview Questions Covered
✅ Find element
✅ First/Last occurrence
✅ Rotated sorted array
✅ Optimization problems (minimum speed, allocation, scheduling)
✅ Duplicate handling

📌 Notes on Binary Search on Answer
Concept: Instead of searching in an array, we search in the range of possible answers.

Feasibility Function: possible(mid) checks if a candidate answer works.

Monotonic Property: If mid is feasible, then all larger answers are feasible (or vice versa).

Applications:

Minimum speed to arrive on time

Minimum capacity to ship packages

Allocate books to minimize maximum pages

Template:

cpp
while(low <= high){
    int mid = (low + high) / 2;
    if(possible(mid))
        high = mid - 1;   // feasible → move left
    else
        low = mid + 1;    // not feasible → move right
}