// Identify the errors and re-write the following code.

#include <stdio.h>

int main() {
  int x, y = 10;
  scanf("%d", &x);
  x = x + y;
  printf("%d\n", x);

  return 0;
}

// Write a c program for checking a number is prime or not?
#include <stdio.h>

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
    printf("%d is prime number", num);
  } else {
    printf("%d is not prime number", num);
  }

  return 0;
}

// Write a C program for printing the following pattern.
#include <stdio.h>

int main() {
  int i, j, n;
  printf("Enter your number: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n - i; j++) {
      printf(" ");
    }
    for (j = 1; j <= i; j++) {
      printf("* ");
    }
    
    printf("\n");
  }
}