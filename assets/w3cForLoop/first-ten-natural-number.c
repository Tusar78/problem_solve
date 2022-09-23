// Write a program in C to display the first 10 natural numbers. 

#include <stdio.h>

void main() {
    int i, j = 0, k = 0;
    
    for(i = 0; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    do {
       j++;
       printf("%d ", j);
    } while(j <= 10);
    printf("\n");
    
    while(k <= 10) {
        printf("%d ", k);
        k++;
    }
    

    return 0;
}