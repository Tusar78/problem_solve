#include<stdio.h>

int main(){
  int *pointerOne,*pointerTwo, A, B, i;
  
  pointerOne = &A;
  pointerTwo = &B;
  
  printf("Enter the value of A : ");
  scanf("%d",&A);
  printf("Enter the value of B : ");
  scanf("%d",&B);
  
  printf("\nThe value of *pointerOne : %d\n", *pointerOne);
  printf("The value of *pointerTwo: %d\n\n", *pointerTwo);
  printf("Even Number is: ");
  
  for( i = *pointerOne; i <= *pointerTwo; i++){
    if(i%2==0){
      printf("%d ", i);
    }
  }
  
  return 0;
}