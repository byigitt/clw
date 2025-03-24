#include <stdio.h>

int stringLength(char str[])
{
  int length = 0;

  // Count characters until null terminator is found
  while (str[length] != '\0')
  {
    length++;
  }

  return length;
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

  int length = stringLength(input);
  printf("Length of the string: %d\n", length);

  return 0;
}