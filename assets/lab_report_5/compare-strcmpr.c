#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Tusar", str2[] = "Rakib";
  int result;

  // comparing strings str1 and str2
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  return 0;
}