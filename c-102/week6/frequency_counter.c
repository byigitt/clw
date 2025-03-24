#include <stdio.h>
#include <stdlib.h>

#define ASCII_SIZE 128

int main()
{
  FILE *file;
  char filename[100];
  char ch;
  int frequency[ASCII_SIZE] = {0}; // Array to store frequency of each ASCII character
  int max_freq = 0;
  char max_char = '\0';

  printf("Enter the filename: ");
  scanf("%s", filename);

  // Open the file
  file = fopen(filename, "r");
  if (file == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }

  // Read each character and count frequencies
  while ((ch = fgetc(file)) != EOF)
  {
    // Only count printable characters
    if (ch >= 32 && ch < ASCII_SIZE)
    {
      frequency[ch]++;

      // Update max frequency if current character has higher frequency
      if (frequency[ch] > max_freq)
      {
        max_freq = frequency[ch];
        max_char = ch;
      }
    }
  }

  // Close the file
  fclose(file);

  // Display the results
  if (max_freq > 0)
  {
    printf("Character with highest frequency: '%c'\n", max_char);
    printf("Frequency: %d times\n", max_freq);
  }
  else
  {
    printf("No valid characters found in the file.\n");
  }

  return 0;
}