// Write a c program to find out the sum of odd series 1 + 3 + 5 + . . . . +n;

#include <stdio.h>

int main () {
  // Declared variable
  int i, num, sum = 0;

  // User input
  printf("Enter an positve integer number: ");
  scanf("%d", &num);
  
  // User entered number
  printf("User entered number: %d\n", num);

  // display the series 
  for(i = 1; i <= num; i++) {
    if (i % 2 != 0) {
        sum += i;
        printf("%d + ", i);
    }
  }
    
  printf("= %d", sum);
  
  return 0;
}