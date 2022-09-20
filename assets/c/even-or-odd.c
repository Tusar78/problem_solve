// Problem :  even or odd.

#include <stdio.h>

int main () {
   // Declared variable
  int num;

  // User input
  printf("Enter your favorite positive number: ");
  scanf("%d", &num);

  // Condition
  if (num % 2 == 0) {
    printf("User entered = %d\n", num);
    printf("This is even number.\n");
  } else {
    printf("User entered = %d\n", num);
    printf("This is odd number.\n");
  }

  return 0;
}