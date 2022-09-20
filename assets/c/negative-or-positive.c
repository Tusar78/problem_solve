// Problem: Number is negative or positive.

#include <stdio.h>

int main()
{
  // Declared variable
  int num;

  // User input
  printf("Enter your favorite number: ");
  scanf("%d", &num);

  // Condition
  if (num == 0) {
    printf("User entered = %d \n", num);
    printf("The number zero is neither positive nor negative. \n");
  }
  else if (num < 0) {
    printf("User entered = %d \n", num);
    printf("This number is Negative. \n");
  } else {
    printf("User entered = %d \n", num);
    printf("This number is Positive. \n");
  }

  return 0;
}