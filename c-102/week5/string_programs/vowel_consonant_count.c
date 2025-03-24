#include <stdio.h>

int isVowel(char c)
{
  // Convert to lowercase for easier comparison
  if (c >= 'A' && c <= 'Z')
  {
    c = c + 32; // Convert to lowercase
  }

  // Check if the character is a vowel
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void countVowelsAndConsonants(char str[])
{
  int vowels = 0, consonants = 0;
  int i = 0;

  while (str[i] != '\0')
  {
    // Check if the character is an alphabet
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    {
      // Check if the character is a vowel
      if (isVowel(str[i]))
      {
        vowels++;
      }
      else
      {
        consonants++;
      }
    }
    i++;
  }

  printf("Vowels: %d\n", vowels);
  printf("Consonants: %d\n", consonants);
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

  countVowelsAndConsonants(input);

  return 0;
}