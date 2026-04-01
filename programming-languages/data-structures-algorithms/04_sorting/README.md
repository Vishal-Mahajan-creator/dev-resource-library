🔰 Basic Sorts (Good for Learning)
Bubble Sort

Repeatedly swaps adjacent elements if they are in the wrong order.

Time Complexity:

Worst/Average: 
𝑂
(
𝑛
2
)

Best: 
𝑂
(
𝑛
)
 (already sorted)

Space Complexity: 
𝑂
(
1
)

Easy to understand, but inefficient for large datasets.

Selection Sort

Finds the minimum element and places it at the beginning.

Time Complexity: Always 
𝑂
(
𝑛
2
)

Space Complexity: 
𝑂
(
1
)

Simple, but not adaptive (doesn’t improve if array is partially sorted).

Insertion Sort

Builds the sorted array one element at a time by inserting into the correct position.

Time Complexity:

Worst/Average: 
𝑂
(
𝑛
2
)

Best: 
𝑂
(
𝑛
)
 (already sorted)

Space Complexity: 
𝑂
(
1
)

Efficient for small or nearly sorted arrays.

🚀 Efficient Sorts (Interview Important)
Merge Sort

Divide and Conquer: splits array into halves, sorts them, and merges.

Time Complexity: 
𝑂
(
𝑛
log
⁡
𝑛
)

Space Complexity: 
𝑂
(
𝑛
)

Stable sort, good for linked lists and large datasets.

Quick Sort

Divide and Conquer: partitions array around a pivot.

Time Complexity:

Worst: 
𝑂
(
𝑛
2
)
 (bad pivot choice)

Average/Best: 
𝑂
(
𝑛
log
⁡
𝑛
)

Space Complexity: 
𝑂
(
log
⁡
𝑛
)
 (recursive stack)

Very fast in practice, widely used.

Heap Sort

Builds a max-heap and repeatedly extracts the maximum.

Time Complexity: 
𝑂
(
𝑛
log
⁡
𝑛
)

Space Complexity: 
𝑂
(
1
)

Not stable, but good when memory is tight.

⚡ Special Sorts (Advanced)
Counting Sort

Counts occurrences of each element (works for integers in a range).

Time Complexity: 
𝑂
(
𝑛
+
𝑘
)
 where 
𝑘
 = range of input values.

Space Complexity: 
𝑂
(
𝑛
+
𝑘
)

Stable, but only works for integers or discrete values.

Radix Sort

Sorts numbers digit by digit using Counting Sort as a subroutine.

Time Complexity: 
𝑂
(
𝑛
𝑘
)
 where 
𝑘
 = number of digits.

Space Complexity: 
𝑂
(
𝑛
+
𝑘
)

Stable, efficient for integers and strings.

Bucket Sort

Distributes elements into buckets, sorts each bucket, then merges.

Time Complexity: 
𝑂
(
𝑛
+
𝑘
)
 (average)

Space Complexity: 
𝑂
(
𝑛
)

Works best when input is uniformly distributed (e.g., floats in [0,1)).

🔰 Basic Sorts (Good for Learning)
Bubble Sort

Repeatedly swaps adjacent elements if they are in the wrong order.

Time Complexity:

Worst/Average: 
𝑂
(
𝑛
2
)

Best: 
𝑂
(
𝑛
)
 (already sorted)

Space Complexity: 
𝑂
(
1
)

Easy to understand, but inefficient for large datasets.

Selection Sort

Finds the minimum element and places it at the beginning.

Time Complexity: Always 
𝑂
(
𝑛
2
)

Space Complexity: 
𝑂
(
1
)

Simple, but not adaptive (doesn’t improve if array is partially sorted).

Insertion Sort

Builds the sorted array one element at a time by inserting into the correct position.

Time Complexity:

Worst/Average: 
𝑂
(
𝑛
2
)

Best: 
𝑂
(
𝑛
)
 (already sorted)

Space Complexity: 
𝑂
(
1
)

Efficient for small or nearly sorted arrays.

🚀 Efficient Sorts (Interview Important)
Merge Sort

Divide and Conquer: splits array into halves, sorts them, and merges.

Time Complexity: 
𝑂
(
𝑛
log
⁡
𝑛
)

Space Complexity: 
𝑂
(
𝑛
)

Stable sort, good for linked lists and large datasets.

Quick Sort

Divide and Conquer: partitions array around a pivot.

Time Complexity:

Worst: 
𝑂
(
𝑛
2
)
 (bad pivot choice)

Average/Best: 
𝑂
(
𝑛
log
⁡
𝑛
)

Space Complexity: 
𝑂
(
log
⁡
𝑛
)
 (recursive stack)

Very fast in practice, widely used.

Heap Sort

Builds a max-heap and repeatedly extracts the maximum.

Time Complexity: 
𝑂
(
𝑛
log
⁡
𝑛
)

Space Complexity: 
𝑂
(
1
)

Not stable, but good when memory is tight.

⚡ Special Sorts (Advanced)
Counting Sort

Counts occurrences of each element (works for integers in a range).

Time Complexity: 
𝑂
(
𝑛
+
𝑘
)
 where 
𝑘
 = range of input values.

Space Complexity: 
𝑂
(
𝑛
+
𝑘
)

Stable, but only works for integers or discrete values.

Radix Sort

Sorts numbers digit by digit using Counting Sort as a subroutine.

Time Complexity: 
𝑂
(
𝑛
𝑘
)
 where 
𝑘
 = number of digits.

Space Complexity: 
𝑂
(
𝑛
+
𝑘
)

Stable, efficient for integers and strings.

Bucket Sort

Distributes elements into buckets, sorts each bucket, then merges.

Time Complexity: 
𝑂
(
𝑛
+
𝑘
)
 (average)

Space Complexity: 
𝑂
(
𝑛
)

Works best when input is uniformly distributed (e.g., floats in [0,1)).