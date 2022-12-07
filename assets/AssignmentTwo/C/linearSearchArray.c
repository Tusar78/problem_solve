#include <stdio.h>

int main() {  
  int number[] = {10, 6, 89, 7, 41, 55, 18};
  int len = sizeof(number) / sizeof(number[0]);
  
  int i, value, pos = -1;

  printf("Enter value what you find: ");
  scanf("%d", &value);
  
  for(i = 0; i < len; i++) {
    if(value == number[i]) {
      pos = i + 1;
      break;
    }
  }

  if(pos == -1) {
    printf("Value is not found!");
  } else {
    printf("Yes! value is found in %d number position", pos);
  }

  return 0;
}