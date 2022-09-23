// Write a program in C to display the multiplication table of a given integer
#include <stdio.h>

int main() {
    int i, j, num, mul = 1;
    
    printf("Enter your number: ");
    scanf("%d", &num);
    
     for (i = 1; i <= num; i++) {
        printf("\nMultiplication table of - %d\n", i);
        for (j = 1; j <= 10; j++) {
            mul = i * j;
            printf("%d x %d = %d\n", i, j, mul);
        }
    }
    
    return 0;
}