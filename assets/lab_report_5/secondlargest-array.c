#include <stdio.h>

int main(){
    int arr1[100];
    int n, i, j, tmp;
    
    printf("Input the size of array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++){
      printf("element - %d : ",i);
      scanf("%d",&arr1[i]);
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr1[j] > arr1[i]){
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("\nThe second largest element is:");
    printf("%d  ", arr1[1]);
    
    return 0;
}

Input the size of array : 4
Input 4 elements in the array :
element - 0 : 5
element - 1 : 7
element - 2 : 9
element - 3 : 3
The second largest element is: 7