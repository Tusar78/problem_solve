// Problems: Area of a circle, where the value of radius is given by the user.

/** Area of circle formula 
 *  A = πr²;
*/

#include <stdio.h>

int main() {
  float PI = 3.14159;
  long int r, A;

  // Get input from user
  printf("Enter the radius value: ");
  scanf("%ld", &r);

  // Area of circle 
  A = PI * (r * r);

  // Display the result
  printf("Are of circle = %ld", A);

  return 0;
}