#include <stdio.h>

int main() {  
  int numbers[100], sum = 0, i, n;

  printf("How many number you enter: ");
  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
  }

  for(i = 0; i < n; i++) {
    sum += numbers[i];
    printf("%d ", numbers[i]);
  }

  printf("\nTotal of numbers = %d \n", sum);
  printf("Average of numbers = %.2lf", (double) sum / n);

  return 0;
}