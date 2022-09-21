// Write a c program to find out the sum of even series 1 , 2 , 3 , . . . . , n;

#include <stdio.h>

int main () {
  // Declared variable
  int i, num, sum = 0;

  // User input
  printf("Enter an integer number: ");
  scanf("%d", &num);
  
  // User entered number
  printf("User entered number: %d\n", num);

  // display the series 
  for(i = 1; i <= num; i++) {
    if (i % 2 == 0) {
        sum += i;
        printf("%d + ", i);
    }
  }
    
  printf("= %d", sum);
  
  return 0;
}