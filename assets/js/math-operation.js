// Problem: Summation, subtraction, division, multiplication of A and B with and without user input.

let A = +prompt('Enter your first number: '),
    B = +prompt('Enter your second number: '),
    sum = A + B,
    sub = A - B,
    mul = A * B,
    div = A / B;

console.log(`User first input: ${A}`);
console.log(`User first input: ${B}`);
console.log(`Summation = ${sum}`);
console.log(`Subtraction = ${sub}`);
console.log(`Multiplication = ${mul}`);
console.log(`Division = ${div}`);
