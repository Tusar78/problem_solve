#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    int i = 0, l = 0;
 
    printf("Input a string : ");
    gets(str1);
    
    printf("The string contains %d  number of characters. \n",strlen(str1));

    printf("So, the length of the string %s is : %d\n\n", str1, strlen(str1));
    
    return 0;
}
