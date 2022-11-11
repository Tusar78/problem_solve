#include <stdio.h>

int main(){
  int a[100], i, sum = 0, n;
  
  printf("Enter array size: ");
  scanf("%d", &n);
  
  for(i = 0; i < n; i++) {
      scanf("%d", &a[i]);
  }
  
  for(i = 0; i < n; i++) {
      sum = sum + a[i];
  }
  
  printf("Summation of [a] = %d\n", sum);
  printf("Average of [a] = %.2f\n", (float)sum/n);

 return 0;    
}