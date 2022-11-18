#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    int i = 0, l = 0;
 
    printf("Input a string : ");
    gets(str1);
 
    while (str1[i] != '\0'){
        i++;
        l++;
    }
    printf("The string contains %d  number of characters. \n",l);
    printf("So, the length of the string %s is : %d\n\n", str1, l);
    
    return 0;
}

Input a string : Tusar Ali
The string contains 9  number of characters. 
So, the length of the string Tusar Ali is : 9