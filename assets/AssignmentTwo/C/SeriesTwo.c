#include <stdio.h>

int main(void) {
  int i, n;

  printf("How many number you enter: ");
  scanf("%d", &n);

  printf("\n\nSeries of : (½^2 +¼^2 +.......................+1/n^2) is \n");
  printf("------------------------\n\n");
  for (i = 2; i <= n; i= i + 2) {
    printf("%.2lf ", (double) 1 / (i * i));
  }
}