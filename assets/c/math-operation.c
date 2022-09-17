// Summation, subtraction, division, multiplication of A and B with and without user input.

#include <stdio.h>

int main() {
  int A, B;
  printf("Enter first number: ");
  scanf("%d", &A);
  printf("Enter second number: ");
  scanf("%d", &B);

  printf("Summation = %d\n", A + B);
  printf("Subtraction = %d\n", A - B);
  printf("Multiplication = %d\n", A * B);
  printf("Divide = %d\n", A / B);

  return 0;
}