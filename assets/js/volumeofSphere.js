// Problems: Volume of sphere, where the value of radius is given by the user.

/** Area of Rectangle formula 
 *  V = (4/3)*π*r³;
*/

const PI = 3.14159;

// Get from user
let r = +prompt('Enter the radius value: ');

// Volume of sphere equation
// V = (4/3)*π*r³;
const V = (4 / 3) * PI * (r * r * r);

// Display the result
console.log(`Radius value: ${r}`);
console.log(`Volume of sphere: ${V.toFixed(2)}`);
