// Problem: Greater among two numbers

#include <stdio.h>

int main () {
  // Declared variable
  int num1, num2;

  // User input 
  printf("Enter your first positive number: ");
  scanf("%d", &num1);
  printf("Enter your second positive number: ");
  scanf("%d", &num2);

  // Condition
  if (num1 > num2) {
    printf("Biggest number is = %d", num1);
  } else {
    printf("Biggest number is = %d", num2);
  }

  return 0;
}