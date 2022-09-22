// Write a c program to find out which number is divisible by 4 and 5 between 10 to 100 and summation these numbers.

#include <stdio.h>

int main () {
  // Declared variable
  int i, sum = 0;
  
  // Fixed value of 100;
  const int number = 100;
  
  printf("Divisible by 4 and 5 between 10 to  100.\n");
  
  // Display 
  for(i = 10; i <= number; i++) {
    if (i % 4 == 0 && i % 5 == 0) {
        sum += i;
        printf("%d divisible by 4 and 5 \n", i);
    }
  }
  
  printf("Summation these numbers: %d", sum);
  
  return 0;
}

