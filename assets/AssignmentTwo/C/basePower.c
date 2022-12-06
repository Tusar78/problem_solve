#include <stdio.h>

int main() {  
  int i, x, n, cal = 1;

  printf("Enter Base Number: ");
  scanf("%d", &x);
  printf("Enter Power Number: ");
  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    cal *= x;
  }

  printf("%d^%d = %d", x, n, cal);
  
  return 0;
}