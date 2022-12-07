#include <stdio.h>

int main() {  
  int number1[] = {10, 6, 89, 7, 41, 55, 18};
  int len = sizeof(number1) / sizeof(number1[0]);
  int number2[20], i;

  for (i = 0; i < len; i++) {
    number2[i] = number1[i];
    printf("%d ", number1[i]);
  }

  return 0;
}