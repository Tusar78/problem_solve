#include<stdio.h>
int main(){
  int i, j, tmp, n;
  
  printf("Enter the size of array : ");
  scanf("%d",&n);
  
  int number[n];
  
  for(i = 0; i < n; i++){
    scanf("%d",&number[i]);
  }
  
  for(i = 0; i < n; i++){
    for(j = i + 1; j < n; j++){
      if(number[i]<number[j]){
        tmp = number[i];
        number[i] = number[j];
        number[j] = tmp;
      }
    }
  }
  
  printf("%d is 2nd minimum\n",number[n-2]);
  printf("%d is 2nd maximum\n",number[1]);
  
  return 0;
}
