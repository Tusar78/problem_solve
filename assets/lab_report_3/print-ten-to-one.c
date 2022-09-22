// Write a C program to print numbers from 10 to 1.

#include <stdio.h>

int main () {
  // Declared variable
  int i;
  
  printf("Print numbers from 10 to 1!\n");
  
  // Display 1 to 10 
  for(i = 10; i >= 1; i--) {
    printf("%d ", i);
  }
  
  return 0;
}