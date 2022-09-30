#include <stdio.h>

int main() {
  float A, PI, r;
  PI = 3.14159;
  printf("Enter your radius value: ");
  scanf("%f", &r);

  A = PI * (r * r);
  printf("Area of circle = %.2f", A);

  return 0;
}