// Problems: Swapping variable.

#include <stdio.h>

int main () {
  int A, B, temp;

  // User input
  printf("Enter your first number: ");
  scanf("%d", &A);
  printf("Enter your second number: ");
  scanf("%d", &B);

  // Before swapping variable
  printf("Before swapping variable.\n");
  printf("First Number = %d\n", A);
  printf("Second Number = %d\n", B);

  // Swapping variable
  temp = A;
  A = B;
  B = temp;

  // After swapping variable 
  printf("After swapping variable.\n");
  printf("First Number = %d\n", A);
  printf("Second Number = %d", B);

  return 0;
}