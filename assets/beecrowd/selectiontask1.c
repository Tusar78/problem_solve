#include <stdio.h>

int main() {
    int A, B, C, D, sum, even;
    scanf("%d%d%d%d", &A, &B, &C, &D);
    sum = C + D > A + B;
    even = A % 2 == 0;
    if(B > C && D > A && C > 0 && D > 0 && sum && even) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }
    return 0;
}