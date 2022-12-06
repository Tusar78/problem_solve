#include <stdio.h>

int main(void) {
  int i, n;

  printf("How many number you enter: ");
  scanf("%d", &n);

  printf("\n\nSeries of : (1/1 + ½ + ⅓ +...................+1/n) is \n");
  printf("------------------------\n\n");
  for (i = 1; i <= n; i++) {
    printf("%.2lf ", (double)1 / i);
  }
}