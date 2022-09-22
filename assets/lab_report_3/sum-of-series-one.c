// Write a c program to find out the series 1 , 2 , 3 , . . . . , n;

#include <stdio.h>

int main () {
  // Declared variable
  int i, num;

  // User input
  printf("Enter an integer number: ");
  scanf("%d", &num);
  
  // User entered number
  printf("User entered number: %d\n", num);

  // display the series 
  for(i = 1; i <= num; i++) {
    printf("%d ", i);
  }

  return 0;
}

Enter an integer number: 10
User entered number: 10
1 2 3 4 5 6 7 8 9 10 