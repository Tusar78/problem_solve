// Problems: Area of a triangle, where the value of base and height are given by the user.

/** Area of Rectangle formula 
 *  A = (base * height) / 2;
*/

let base = +prompt('Enter your base value: '),
    height = +prompt('Enter your height value: ');

// A = (base * height) / 2;
const A = (base * height) / 2;

// Display the result
console.log(`Base: ${base}`);
console.log(`Height: ${height}`);
console.log(`Are of triangle: ${A}`);