// Write a c program to find out the series 1 , 2 , 3 , . . . . , n;

#include <stdio.h>

int main () {
  // Declared variable
  int i, num;

  // User input
  printf("Enter an integer number: ");
  scanf("%d", &num);

  // display the series 
  for(i = 1; i <= num; i++) {
    printf("%d ", i);
  }

  return 0;
}