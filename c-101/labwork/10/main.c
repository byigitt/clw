#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
  char sentence[100], letter;

  printf("Enter a sentence: ");
  scanf("%[^\n]s", sentence);
  
  printf("Enter a letter: ");
  scanf(" %c", &letter);
  
  int fullLength = strlen(sentence), spaces = 0, digits = 0, uppercase = 0, lowercase = 0;
  for (int i = 0; i < fullLength; i++) {
    if (sentence[i] == tolower(letter))
      lowercase++;

    if (sentence[i] == toupper(letter))
      uppercase++;

    if (sentence[i] >= '0' && sentence[i] <= '9')
      digits++;

    if (sentence[i] == ' ')
      spaces++;
  };
  
  printf("The length of the sentence is %d. \n", fullLength);
  printf("%d uppercase and %d lowercase %c. \n", uppercase, lowercase, letter);
  printf("The number of words in the sentence is %d. \n", spaces + 1);
  printf("The number of spaces in the sentence is %d. \n", spaces);
  printf("The number of digits in the sentence is %d. \n", digits);
  
  return 0;
};