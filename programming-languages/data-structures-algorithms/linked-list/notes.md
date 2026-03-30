✅ What is a Linked List?

A Linked List is a collection of nodes where:

[DATA | NEXT] -> [DATA | NEXT] -> [DATA | NEXT] -> NULL

Each node contains:

Data
Address of next node
✅ Why Linked List?

Array Problems:

❌ Fixed size
❌ Memory waste
❌ Insertion costly

Linked List Advantages:

✅ Dynamic size
✅ Easy insertion/deletion
✅ Efficient memory usage

✅ Types of Linked Lists
1️⃣ Singly Linked List

One pointer → next node

10 -> 20 -> 30 -> NULL
2️⃣ Doubly Linked List

Two pointers:

NULL <- 10 <-> 20 <-> 30 -> NULL
3️⃣ Circular Linked List
10 -> 20 -> 30
 ^             |
 |_____________|
✅ Operations
Operation	Complexity
Insert Beginning	O(1)
Insert End	O(n)
Delete	O(n)
Search	O(n)
Traverse	O(n)
✅ Node Structure
class Node {
    int data;
    Node* next;
};

⭐ VERY IMPORTANT (Interview Tip)

Linked List teaches:

Memory understanding
Pointer logic
Backend engineering fundamentals
OS + Database internals

