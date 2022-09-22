// Write a c program to find out which number is divisible by 4 and 5 between 1 to  100.

#include <stdio.h>

int main () {
  // Declared variable
  int i;
  
  // Fixed value of 100;
  const int number = 100;
  
  printf("Divisible by 4 and 5 between 10 to  100.\n");
  
  // Display 
  for(i = 10; i <= number; i++) {
    if (i % 4 == 0 && i % 5 == 0) {
        printf("%d divisible by 4 and 5 \n", i);
    }
  }
  
  return 0;
}