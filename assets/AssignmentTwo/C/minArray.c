#include <stdio.h>

int main() {  
  int numbers[100], i, n;

  printf("How many number you enter: ");
  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
  }

  int min = numbers[0];

  for(i = 0; i < n; i++) {
    printf("%d ", numbers[i]);
    if (min > numbers[i]) {
      min = numbers[i];
    }
  }

  printf("\nThe minimum number in an array = %d \n", min);

  return 0;
}