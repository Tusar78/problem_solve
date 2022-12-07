#include <stdio.h>

int main() {  
  int fibo[100], i, n;

  printf("How many number your enter for series: ");
  scanf("%d", &n);

  fibo[0] = 0;
  fibo[1] = 1;

  for(i = 2; i < n; i++) {
    fibo[i] = fibo[i-1] + fibo[i-2];
  }

  for(i = 0; i < n; i++) {
    printf("%d ", fibo[i]);
  }
  

  return 0;
}