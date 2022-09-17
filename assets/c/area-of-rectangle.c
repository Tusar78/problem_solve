// Problems: Area of a rectangle, where the value of width and length are given by the user.

/** Area of Rectangle formula 
 *  A = wl;
*/

#include <stdio.h>

int main() {
  int w, l, A;
  printf("Enter the width value: ");
  scanf("%d", &w);
  printf("Enter the base value: ");
  scanf("%d", &l);

  // Are of rectangle
  A = w * l;

  // Display the area of rectangle
  printf("Area of rectangle = %d", A);

  return 0;
}