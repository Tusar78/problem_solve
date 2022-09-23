// Write a program in C to display the cube of the number upto given an integer.

#include <stdio.h>

void main() {
    int i, num;
    
    printf("Enter your favorite n number: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        printf("%d", i * i * i);
    }
    
    return 0;
}