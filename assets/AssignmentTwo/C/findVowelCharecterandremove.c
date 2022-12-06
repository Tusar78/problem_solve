#include <stdio.h>
#include <string.h>
int main() {
  int i, count = 0;
  char sentence[100];

  printf("Type your sentence: ");
  gets(sentence);
  printf("\n\nWith Vowel: %s\nWithout Vowel: ", sentence);
  
  int len = strlen(sentence);
  
  for(i = 0; i < len; i++) {
    if(sentence[i] == 'A' || sentence[i] == 'a' || sentence[i] == 'E' || sentence[i] == 'e' || sentence[i] == 'I' || sentence[i] == 'i' || sentence[i] == 'O' || sentence[i] == 'o' || sentence[i] == 'U' || sentence[i] == 'u') {
      count++;
    } else {
      printf("%c", sentence[i]);      
    }
  }

  printf("\n\nVowel charecter number is = %d", count);
  return 0;
}