// #include <stdio.h>

// int main() {
//   float A, PI, r;
//   PI = 3.14159;
//   printf("Enter your radius value: ");
//   scanf("%f", &r);

//   A = PI * (r * r);
//   printf("Area of circle = %.2f", A);

//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int a, b, add, sum, mul;
//   float div;
//   printf("Enter first number: ");
//   scanf("%d", &a);
//   printf("Enter second number: ");
//   scanf("%d", &b);

//   add = a + b;
//   sum = a - b;
//   mul = a * b;
//   div = (float) a / b;

//   printf("\nAddition is : %d\n", add);
//   printf("\nSubtraction is : %d\n", sum);
//   printf("\nMultiplication is : %d\n", mul);
//   printf("\nDivision is : %.2f\n", div);

//   return 0;
// }

#include <stdio.h>

int main() {
    int a;
    printf("Enter your number: ");
    scanf("%d", &a);
    
    if (a > 0) {
        printf("\nThis is positive number\n");
    } else if (a == 0) {
        printf("\nZero is neither positive or negative\n");
    }else {
        printf("\nThis is negative number\n");
    }
    
    return 0;
}