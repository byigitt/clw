#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main()
{
  char str[MAX_LENGTH];
  char substring[MAX_LENGTH];
  int start_index, length;

  // Get input string
  printf("Enter a string: ");
  fgets(str, MAX_LENGTH, stdin);

  // Remove trailing newline if present
  size_t str_len = strlen(str);
  if (str_len > 0 && str[str_len - 1] == '\n')
  {
    str[str_len - 1] = '\0';
    str_len--;
  }

  // Get substring parameters
  printf("Enter the index of the first character of the substring: ");
  scanf("%d", &start_index);

  printf("Enter the length of the substring: ");
  scanf("%d", &length);

  // Validate input
  if (start_index < 0 || start_index >= str_len || length <= 0)
  {
    printf("Invalid index or length.\n");
    return 1;
  }

  // Ensure we don't go beyond the string's length
  if (start_index + length > str_len)
  {
    length = str_len - start_index;
  }

  // Extract the substring
  int j = 0;
  for (int i = start_index; i < start_index + length; i++)
  {
    substring[j++] = str[i];
  }
  substring[j] = '\0';

  // Display the result
  printf("The substring is: %s\n", substring);

  return 0;
}