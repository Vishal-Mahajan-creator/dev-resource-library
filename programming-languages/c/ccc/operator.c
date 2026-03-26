#include <stdio.h>

  int main() {
    int a = 10, b = 5, c;
  
    // Arithmetic operators
    printf("Arithmetic operators\n");
    c = a + b;
    printf("a + b = %d\n", c); // Output: 15
    c = a - b;
    printf("a - b = %d\n", c); // Output: 5
    c = a * b;
    printf("a * b = %d\n", c); // Output: 50
    c = a / b;
    printf("a / b = %d\n", c); // Output: 2
    c = a % b;
    printf("a %% b = %d\n\n", c); // Output: 0

    // Assignment operators
    c = a;
    printf("Assignment operators\n");
    printf("c = a, c = %d\n", c); // Output: 10
    c += a; // c = c + a
    printf("c += a, c = %d\n", c); // Output: 20
    c -= a; // c = c - a
    printf("c -= a, c = %d\n", c); // Output: 10
    c *= a; // c = c * a
    printf("c *= a, c = %d\n", c); // Output: 100
    c /= a; // c = c / a
    printf("c /= a, c = %d\n", c); // Output: 10
    c %= a; // c = c % a
    printf("c %%= a, c = %d\n\n", c); // Output: 0
  
    // Comparison operators
    printf("Comparison operators\n");
    printf("a == b is %d\n", a == b); // Output: 0 (false)
    printf("a != b is %d\n", a != b); // Output: 1 (true)
    printf("a > b is %d\n", a > b); // Output: 1 (true)
    printf("a < b is %d\n", a < b); // Output: 0 (false)
    printf("a >= b is %d\n", a >= b); // Output: 1 (true)
    printf("a <= b is %d\n\n", a <= b); // Output: 0 (false)
  
    // Logical operators
    printf("Logical operators\n");
    printf("(a > b) && (a != b) is %d\n", (a > b) && (a != b)); // Output: 1 (true)
    printf("(a < b) || (a == b) is %d\n", (a < b) || (a == b)); // Output: 0 (false)
    printf("!(a == b) is %d\n\n", !(a == b)); // Output: 1 (true)
  
    // Bitwise operators
    int x = 12, y = 25; // Binary: x = 00001100, y = 00011001
    printf("Bitwise operators\n");
    printf("x & y is %d\n", x & y); // Output: 8  (00001000)
    printf("x | y is %d\n", x | y); // Output: 29 (00011101)
    printf("x ^ y is %d\n", x ^ y); // Output: 21 (00010101)
    printf("~x is %d\n", ~x);   // Output: -13 (11110011) in two's complement
    printf("x << 2 is %d\n", x << 2); // Output: 48 (00110000)
    printf("y >> 2 is %d\n\n", y >> 2); // Output: 6  (00000110)
  
    return 0;
  }