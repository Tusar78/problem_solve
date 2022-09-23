// Write a C program to find the sum of first 10 natural numbers.

#include <stdio.h>

void main() {
    int i, j = 0, k = 0, sum1 = 0, sum2 = 0, sum3 = 0;
    
    for(i = 0; i <= 10; i++) {
        sum1 += i;
        printf("%d ", i);
    }
    printf(" = %d\n", sum1);
    
    do {
       j++;
       printf("%d ", j);
       sum2 += j;
    } while(j <= 10);
    printf(" = %d\n", sum2);
    
    while(k <= 10) {
        sum3 += k;
        printf("%d ", k);
        k++;
    }
    printf(" = %d\n", sum3);

    return 0;
}