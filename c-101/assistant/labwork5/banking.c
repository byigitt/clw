#include <stdio.h>

int main()
{
  float balance = 1000.0; // Initial balance
  int choice;
  float amount;

  while (1)
  {
    printf("\nBanking System Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Your current balance is: $%.2f\n", balance);
      break;

    case 2:
      printf("Enter amount to deposit: $");
      scanf("%f", &amount);
      if (amount > 0)
      {
        balance += amount;
        printf("Successfully deposited $%.2f\n", amount);
        printf("New balance: $%.2f\n", balance);
      }
      else
      {
        printf("Invalid amount!\n");
      }
      break;

    case 3:
      printf("Enter amount to withdraw: $");
      scanf("%f", &amount);
      if (amount > 0 && amount <= balance)
      {
        balance -= amount;
        printf("Successfully withdrawn $%.2f\n", amount);
        printf("New balance: $%.2f\n", balance);
      }
      else
      {
        printf("Invalid amount or insufficient funds!\n");
      }
      break;

    case 4:
      printf("Thank you for using our banking system!\n");
      return 0;

    default:
      printf("Invalid choice! Please select 1-4\n");
    }
  }

  return 0;
}