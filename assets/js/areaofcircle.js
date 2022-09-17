// Problems: Area of a circle, where the value of radius is given by the user.

/** Area of circle formula 
 *  A = πr²;
*/

const PI = 3.14159;

let r = +prompt('Enter your positive radius number: ');

// Formula A = πr²;
const A = PI * (r * r);

// Display the area of a circle
console.log('Area of the circle = ', A.toFixed(2));