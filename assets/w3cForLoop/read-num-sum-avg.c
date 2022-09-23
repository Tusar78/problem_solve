// Write a program in C to read 5 numbers from keyboard and find their sum and average.

#include <stdio.h>
void main() {
    int i, n, sum = 0;
    float avg;
        
    printf("Input the 5 number :\n");
    for (i = 1; i <= 5; i++) {
        printf("Number-%d : ", i);
        scanf("%d", &n);
        sum += n;
    }
    
    avg = sum / 5.0;
    
    printf("The sum of 5 no is : %d\nThe Average is : %.2f\n", sum, avg);
    
    return 0;
}