/*
=========================================
JavaScript Basics
Author: Your Name
Purpose: Learn JS Fundamentals
=========================================
*/

/*
-----------------------------------------
1. Variables
-----------------------------------------
*/

// old way (avoid)
var a = 10;

// modern ways
let age = 22;        // value can change
const PI = 3.14;     // constant value

console.log(age);


/*
-----------------------------------------
2. Data Types
-----------------------------------------
*/

// Number
let number = 100;

// String
let name = "Developer";

// Boolean
let isLearning = true;

// Undefined
let x;

// Null
let y = null;

console.log(typeof number);
console.log(typeof name);


/*
-----------------------------------------
3. Operators
-----------------------------------------
*/

let a1 = 10;
let b1 = 5;

console.log(a1 + b1); // addition
console.log(a1 - b1); // subtraction
console.log(a1 * b1);
console.log(a1 / b1);
console.log(a1 % b1);


/*
-----------------------------------------
4. Conditions
-----------------------------------------
*/

let marks = 75;

if (marks >= 90) {
    console.log("Grade A");
} else if (marks >= 60) {
    console.log("Grade B");
} else {
    console.log("Fail");
}


/*
-----------------------------------------
5. Loops
-----------------------------------------
*/

// for loop
for (let i = 1; i <= 5; i++) {
    console.log("Number:", i);
}

// while loop
let count = 1;
while (count <= 3) {
    console.log("Count:", count);
    count++;
}


/*
-----------------------------------------
6. Functions
-----------------------------------------
*/

// normal function
function greet(name) {
    return "Hello " + name;
}

console.log(greet("Student"));


// arrow function (modern JS)
const add = (x, y) => {
    return x + y;
};

console.log(add(5, 3));


/*
-----------------------------------------
7. Scope
-----------------------------------------
*/

let globalVar = "I am global";

function testScope() {
    let localVar = "I am local";
    console.log(globalVar);
    console.log(localVar);
}

testScope();


/*
-----------------------------------------
8. Arrays
-----------------------------------------
*/

let fruits = ["Apple", "Banana", "Mango"];

console.log(fruits[0]);

fruits.push("Orange"); // add item

console.log(fruits);


/*
-----------------------------------------
9. Objects
-----------------------------------------
*/

let student = {
    name: "Rahul",
    age: 22,
    course: "Full Stack"
};

console.log(student.name);
console.log(student.age);