#include <stdio.h>

void countCharacters(char str[])
{
  int alphabets = 0, digits = 0, spaces = 0, special = 0, words = 0;
  int i = 0;
  int inWord = 0; // Flag to track if we're inside a word

  while (str[i] != '\0')
  {
    // Count alphabets
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    {
      alphabets++;
      if (!inWord)
      {
        inWord = 1;
        words++;
      }
    }
    // Count digits
    else if (str[i] >= '0' && str[i] <= '9')
    {
      digits++;
      if (!inWord)
      {
        inWord = 1;
        words++;
      }
    }
    // Count spaces
    else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    {
      spaces++;
      inWord = 0; // End of a word
    }
    // Count special characters
    else
    {
      special++;
      if (!inWord)
      {
        inWord = 1;
        words++;
      }
    }
    i++;
  }

  printf("Alphabetic characters: %d\n", alphabets);
  printf("Digits: %d\n", digits);
  printf("Spaces: %d\n", spaces);
  printf("Special characters: %d\n", special);
  printf("Words: %d\n", words);
}

int main()
{
  char input[100];

  printf("Enter a string: ");
  fgets(input, sizeof(input), stdin);

  // Remove newline character if present
  int i = 0;
  while (input[i] != '\0')
  {
    if (input[i] == '\n')
    {
      input[i] = '\0';
      break;
    }
    i++;
  }

  countCharacters(input);

  return 0;
}