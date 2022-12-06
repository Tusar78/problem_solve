#include <stdio.h>

int summation(int n) {
  if (n == 0) {
    return 0;
  } else {
    return (summation(n - 1) + n);
  }
}

int main() {  
  int i, sum, n;

  printf("How many number you enter: ");
  scanf("%d", &n);

  sum = summation(n);
  printf("Summation of 1 to %d  = %d", n, sum);
  
  return 0;
}
