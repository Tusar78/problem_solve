// Identify the errors and re-write the following code.

#include <stdio.h>
  int main() {
  int x, y = 10;
  scanf("%d", &x);
  x = x + y;
  printf("%d\n", x);
    
    return 0;
}

// Predict the output of the following program.
#include <stdio.h>;
int main() { 
  int a=6;
  printf("a = %d\n",a++);
  printf("a = %d\n",++a);
  printf("a = %d\n",a--);
  printf("a = %d\n",--a);

  return 0;
}

// Output
/**
a = 6
a = 8
a = 8
a = 6
*/