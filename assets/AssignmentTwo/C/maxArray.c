#include <stdio.h>

int main() {  
  int numbers[100], i, n;

  printf("How many number you enter: ");
  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
  }

  int max = numbers[0];

  for(i = 0; i < n; i++) {
    printf("%d ", numbers[i]);
    if (max < numbers[i]) {
      max = numbers[i];
    }
  }

  printf("\nThe maximum number in an array = %d \n", max);

  return 0;
}