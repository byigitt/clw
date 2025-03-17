#include <stdio.h>

int compareStrings(char str1[], char str2[])
{
  int i = 0;

  // Compare characters until a difference is found or end of string
  while (str1[i] != '\0' && str2[i] != '\0')
  {
    if (str1[i] != str2[i])
    {
      return str1[i] - str2[i]; // Return the difference
    }
    i++;
  }

  // If we reach here, either both strings are identical up to the length of the shorter one,
  // or one string is a prefix of the other
  return str1[i] - str2[i]; // Will be 0 if both strings end at the same position
}

int main()
{
  char str1[100], str2[100];

  printf("Enter first string: ");
  fgets(str1, sizeof(str1), stdin);

  printf("Enter second string: ");
  fgets(str2, sizeof(str2), stdin);

  // Remove newline characters if present
  int i = 0;
  while (str1[i] != '\0')
  {
    if (str1[i] == '\n')
    {
      str1[i] = '\0';
      break;
    }
    i++;
  }

  i = 0;
  while (str2[i] != '\0')
  {
    if (str2[i] == '\n')
    {
      str2[i] = '\0';
      break;
    }
    i++;
  }

  int result = compareStrings(str1, str2);

  if (result == 0)
  {
    printf("Both strings are identical.\n");
  }
  else if (result < 0)
  {
    printf("First string is lexicographically smaller than the second string.\n");
  }
  else
  {
    printf("First string is lexicographically greater than the second string.\n");
  }

  return 0;
}