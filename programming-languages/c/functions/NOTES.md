# C Functions — Complete Notes

## What is a Function?
A function is a block of code that performs a specific task.

Advantages:
- Code reuse
- Better readability
- Easy testing
- Modular programming

---

## Function Syntax

return_type functionName(parameters) {
    // code
}

---

## Function Life Cycle

1. Declaration (Prototype)
2. Definition
3. Function Call

Example:
int add(int a, int b);   // declaration

int add(int a, int b){   // definition
    return a+b;
}

add(5,3);                // call

---

## Types of Functions

### 1. No parameter & No return
void greet();

### 2. Parameter & No return
void display(int n);

### 3. No parameter & Return value
int getNumber();

### 4. Parameter & Return value ⭐ MOST USED
int add(int a,int b);

---

## Call by Value
Copy of variable is passed.

Original value NOT changed.

---

## Call by Reference (Using Pointers)
Address is passed.

Original value CAN change.

---

## Recursion (Important)
Function calling itself.

Example:
Factorial
Fibonacci

---

## Best Practices
- Use meaningful names
- Keep function small
- One task per function