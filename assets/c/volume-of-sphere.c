// Problems: Volume of sphere, where the value of radius is given by the user.

/** Volume of sphere formula 
 *  A = (4/3)πr³;
*/

#include <stdio.h>
#define PI 3.14159

int main() {
  float r, A;
  
  printf("Enter the radius value: ");
  scanf("%f", &r);

  // Volume of sphere
  A = (4 / 3) * PI * (r * r * r);

  // Display the volume of sphere
  printf("Volume of sphere is = %.2f ", A);

  return 0;
}