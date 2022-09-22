// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].

#include <stdio.h>

void main() {   
  // Declared variable
  long int i, range, userTerms, terms = 0;
	int sum = 0;

	printf("Enter the number of range: ");
	scanf("%ld", &range);

	printf("Enter the number of terms: ");
	scanf("%ld",&userTerms);

	for (i = 1; i <= range; i++) { 
	  terms = terms * 10 + userTerms;
	  printf("%ld ", terms);
	  sum += terms;
	}

	printf("\nThe sum of the series = %d \n",sum);

  return 0;
} 

