#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 1000

int main()
{
  FILE *file;
  char filename[100];
  char line[MAX_LENGTH];
  char converted[MAX_LENGTH];

  printf("Enter the filename: ");
  scanf("%s", filename);

  // Open the file
  file = fopen(filename, "r");
  if (file == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }

  printf("\nOriginal text:\n");

  // Process each line in the file
  while (fgets(line, MAX_LENGTH, file) != NULL)
  {
    // Display the original line
    printf("%s", line);

    // Convert case for each character
    for (int i = 0; i < strlen(line); i++)
    {
      if (islower(line[i]))
      {
        converted[i] = toupper(line[i]);
      }
      else if (isupper(line[i]))
      {
        converted[i] = tolower(line[i]);
      }
      else
      {
        converted[i] = line[i];
      }
    }
    converted[strlen(line)] = '\0';
  }

  // Close the file
  fclose(file);

  printf("\nConverted text:\n");

  // Open the file again to display the converted text
  file = fopen(filename, "r");
  if (file == NULL)
  {
    printf("Error reopening file.\n");
    return 1;
  }

  while (fgets(line, MAX_LENGTH, file) != NULL)
  {
    // Convert case for each character
    for (int i = 0; i < strlen(line); i++)
    {
      if (islower(line[i]))
      {
        converted[i] = toupper(line[i]);
      }
      else if (isupper(line[i]))
      {
        converted[i] = tolower(line[i]);
      }
      else
      {
        converted[i] = line[i];
      }
    }
    converted[strlen(line)] = '\0';

    // Print the converted line
    printf("%s", converted);
  }

  // Close the file
  fclose(file);

  return 0;
}