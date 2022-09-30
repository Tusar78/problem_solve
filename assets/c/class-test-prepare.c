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

// #include <stdio.h>

// int main() {
//     int a;
//     printf("Enter your number: ");
//     scanf("%d", &a);
    
//     if (a > 0) {
//         printf("\nThis is positive number\n");
//     } else if (a == 0) {
//         printf("\nZero is neither positive or negative\n");
//     }else {
//         printf("\nThis is negative number\n");
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//   int i;
//   for(i = 1; i <= 10; i++) {
//     printf("%d ", i);
//   }

//   return 0;
// }

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num, i, count, renge, count2 = 0;
    scanf("%d", &renge);
    for (num = 2; num <= renge; num++) {
        count = 0;
        for (i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                count++;
                break;
            }
        }
        
        if (count == 0 && count != 1) {
            printf("%d ", num);
            count2++;
        }
    }
     
    printf("\n%d ", count2);
    return 0;
}