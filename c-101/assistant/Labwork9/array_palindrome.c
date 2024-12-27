#include <stdio.h>

int main()
{
  int arr[10];
  int isPalindrome = 1; // 1 for true, 0 for false

  // Input array elements
  printf("Enter 10 integers:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // Check if array is palindrome
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] != arr[9 - i])
    {
      isPalindrome = 0;
      break;
    }
  }

  // Display the array
  printf("\nThe array: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }

  // Display result
  if (isPalindrome)
  {
    printf("\nThe array is a palindrome.\n");
  }
  else
  {
    printf("\nThe array is not a palindrome.\n");
  }

  return 0;
}