// Problem: Equal or not equal number;

#include <stdio.h>

int main () {
  // Declared variable 
  int num1, num2;

  // User input 
  printf("Enter your first positive number: ");
  scanf("%d", num1);
  printf("Enter your second positive number: ");
  scanf("%d", num2);

  // Condition
  if (num1 != num2) {
    printf("Two numbers are not equal");
  } else {
    printf("Two numbers are equal");
  }

  return 0;
}