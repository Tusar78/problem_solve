// Identify the errors and re-write the following code.

#include <stdio.h>
  int main() {
  int x, y = 10;
  scanf("%d", &x);
  x = x + y;
  printf("%d\n", x);
    
    return 0;
}

// Predict the output of the following program.
#include <stdio.h>;
int main() { 
  int a=6;
  printf("a = %d\n",a++);
  printf("a = %d\n",++a);
  printf("a = %d\n",a--);
  printf("a = %d\n",--a);

  return 0;
}


// Write a C program for checking a number is prime or not.

#include <stdio.h>;
int main() { 
  int num, i, flag = 0;
  printf("Enter your number: ");
  scanf("%d", &num);
  if (num == 0 || num == 1) {
      flag = 1;
  }
  
  for (i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
          flag = 1;
          break;
      }
  }
  
  if (flag == 0) {
      printf("%d is prime", num);
  } else {
      printf("%d is not prime", num);
  }

  return 0;
}

// Write a C program for printing the following pattern.

#include <stdio.h>;
int main() { 
  int row, col, num;
  printf("Enter your number: ");
  scanf("%d", &num);
  for (row = 1; row <= num; row++) {
      for(col = 1; col <= num-row; col++) {
          printf(" ");
      }
      for(col = 1; col <= row; col++) {
          printf("* ");
      }
      
      printf("\n");
  }
  return 0;
}

Enter your number: 4
   * 
  * * 
 * * * 
* * * * 