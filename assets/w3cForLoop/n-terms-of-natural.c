// Write a program in C to display n terms of natural number and their sum.

#include <stdio.h>

void main() {
    int i, num, sum = 0;
    
    printf("Enter your n number: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        sum += i;
        printf("%d ", i);
    }
    
    printf(" = %d\n", sum);

    return 0;
}