// Problems: Area of a triangle, where the value of base and height are given by the user.

/** Area of Rectangle formula 
 *  A = (base * height) / 2;
*/

#include <stdio.h>

int main() {
  float b, h, A;

  printf("Enter your base value: ");
  scanf("%f", &b);
  printf("Enter your height value: ");
  scanf("%f", &h);

  // Area of triangle
  A = .5 * b * h;

  // Display the area of triangle
  printf("Area of triangle = %2f", A);

  return 0;
}