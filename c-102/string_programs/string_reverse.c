#include <stdio.h>

void reverseString(char str[])
{
  int length = 0;

  // Find the length of the string
  while (str[length] != '\0')
  {
    length++;
  }

  // Reverse the string by swapping characters
  for (int i = 0, j = length - 1; i < j; i++, j--)
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
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

  printf("Original string: %s\n", input);

  reverseString(input);

  printf("Reversed string: %s\n", input);

  return 0;
}