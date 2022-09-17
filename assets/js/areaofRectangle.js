// Problems: Area of a rectangle, where the value of width and length are given by the user.

/** Area of Rectangle formula 
 *  A = wl;
*/

let w = +prompt('Enter your width value: '),
    l = +prompt('Enter your length value: ');

// A = wl;
const A = w * l;

// 
console.log(`Width: ${w}`);
console.log(`Height: ${l}`);
console.log(`Are of rectangle: ${A}`);