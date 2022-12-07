#include<stdio.h>
int main(){
  int i, j, row, col;
  printf("Enter your row: ");
  scanf("%d", &row);
  printf("Enter your col: ");
  scanf("%d", &col);

  printf("\n");
  int numbers[row][col];

  for(i = 0; i < row; i++) {
    for(j = 0; j < col; j++) {
      printf("Numbers[%d][%d] = ", i, j);
      scanf("%d", &numbers[i][j]);
    }
    printf("\n");
  }

  for(i = 0; i < row; i++) {
    for(j = 0; j < col; j++) {
      printf("%d ", numbers[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
