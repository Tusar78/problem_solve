// Problem: Greater among two numbers

#include <stdio.h>

int main () {
  // Declared variable
  int num1, num2, num3;

  // User input 
  printf("Enter your first positive number: ");
  scanf("%d", &num1);
  printf("Enter your second positive number: ");
  scanf("%d", &num2);
  printf("Enter your third positive number: ");
  scanf("%d", &num3);

  // Condition
  if (num1 > num2 && num1 > num3) {
    printf("Biggest number is = %d", num1);
  } else if (num2 > num3 && num2 > num1) {
    printf("Biggest number is = %d", num2);
  } else {
    printf("Biggest number is = %d", num3);
  }

  return 0;
}