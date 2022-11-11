#include <stdio.h>

int main(){
  int a[100], n, i;
  printf("How many number you enter: ");
  scanf("%d", &n);
  
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);    
  }
  
  int max = a[0];
  for(i = 0; i < n; i++) {
      if(max < a[i]) {
          max = a[i];
      }
  }
  
  printf("Maximum number is = %d", max);
  
  return 0;    
}