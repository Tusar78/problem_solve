// Problems: Swapping variable;

let A = +prompt('Enter first number value: '),
    B = +prompt('Enter second number value: ')

console.log(`Before Swapping variable: `);
console.log(`A = ${A}`);
console.log(`B = ${B}`);

let temp = A;
A = B;
B = temp;

console.log(`After Swapping variable: `);
console.log(`A = ${A}`);
console.log(`B = ${B}`);