#include<stdio.h>

int equation = 1, i = 1;
void value(int base, int power){
 equation *= base;
  
 if(i == power){
   printf("%d^%d = %d", base, power, equation);
   return;
 }  
 i++;
  
 value(base, power);
}

int main(){
 int x, n;
  
 printf("Enter the value of Base : ");
 scanf("%d", &x);
 printf("Enter the value of Power : ");
 scanf("%d", &n);
  
 value(x,n);
}