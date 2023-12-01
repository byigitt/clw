#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_STACK_SIZE 100

struct Base {
  int health;
  int strength;
};

struct Stack {
  struct Base *data;
  int top;
  int capacity;
};

struct Stack *initialize(int capacity) {
  struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
  if (!stack) {
    perror("Stack memory allocation failed");
    exit(1);
  }

  stack->data = (struct Base *)malloc(capacity * sizeof(struct Base));
  if (!stack->data) {
    free(stack);
    perror("Stack data memory allocation failed");
    exit(1);
  }

  stack->top = -1;
  stack->capacity = capacity;
  return stack;
};

int isEmpty(struct Stack *stack) {
  return stack->top == -1;
};

int isFull(struct Stack *stack) {
  return stack->top == stack->capacity - 1;
};

void push(struct Stack *stack, int health, int strength) {
  if (stack->top == MAX_STACK_SIZE - 1) {
    printf("Please do not add more than 100 soldiers to one side!\n");
  } else {
    stack->data[++stack->top].health = health;
    stack->data[stack->top].strength = strength;
  }
};

struct Base pop(struct Stack *stack, int side) {
  if (isEmpty(stack)) {
    printf("You forget to add soldiers to the %s side, please add some!\n", side == 1 ? "first" : "second");
    exit(1);
  } else {
    return stack->data[stack->top--];
  }
};

struct Base top(struct Stack *stack, int side) {
  if (isEmpty(stack)) {
    printf("You forget to add soldiers to the %s side, please add some!\n", side == 1 ? "first" : "second");
    exit(1);
  } else {
    return stack->data[stack->top];
  }
};

void dmg(struct Stack *stack, int damage) {
  if (!isEmpty(stack)) {
    stack->data[stack->top].health -= damage;
  }
};

void destroy(struct Stack *stack) {
  free(stack->data);
  free(stack);
};

int main() {
  FILE *fp;
  FILE *fo;
  
  fp = fopen("input.txt", "r");
  fo = fopen("output.txt", "w");
  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  };
  
  srand(time(NULL));
  struct Stack *team1 = initialize(100);
  struct Stack *team2 = initialize(100);
  
  char pairs[1000];
  char type;

  int turns = 0;
  int num;

  while (fscanf(fp, "%c", &type) != EOF) {
    if (type == 'A') {
      fscanf(fp, " %d %s\n", &num, &pairs);

      if (num != 1 && num != 2) {
        printf("Because you didn\'t enter a valid side number (1 or 2), we were unable to add your soldier(s). Please enter a correct side number!\n");
        fprintf(fo, "Because you didn\'t enter a valid side number (1 or 2), we were unable to add your soldier(s). Please enter a correct side number!\n");
        continue;   
      };

      printf("add soldier to side %d\n", num);
      fprintf(fo, "add soldier to side %d\n", num);
      
      char *token = strtok(pairs, ";");
      while (token != NULL) {
        char current[10];
        strcpy(current, token);

        int file_health;
        int file_strength;
        sscanf(current, "%d,%d", &file_health, &file_strength);

        if (file_health < 1 || file_health > 100 || file_strength < 1 || file_strength > 999) {
          printf("You entered stats invalid for a soldier, please check your soldier stats!\n");
          fprintf(fo, "You entered stats invalid for a soldier, please check your soldier stats!\n");
          exit(1);
        };

        printf("S- H:%d S:%d\n", file_health, file_strength);
        fprintf(fo, "S- H:%d S:%d\n", file_health, file_strength);
        if (num == 1) {
          push(team1, file_health, file_strength);
        } else if (num == 2) {
          push(team2, file_health, file_strength);
        };

        token = strtok(NULL, ";");
      }
    } else if (type == 'F') {
      if (turns % 2 == 0) {
        struct Base attacker = top(team1, 1);
        struct Base victim = top(team2, 2);
        
        int damage = (attacker.strength - victim.strength) * 0.05 + 50;
        printf("1 hit %d damage\n", damage);
        fprintf(fo, "1 hit %d damage\n", damage);

        dmg(team2, damage);
        victim.health -= damage;
        
        if (victim.health < 1) {
          pop(team2, 2);
          printf("2 has a casualty\n");
          fprintf(fo, "2 has a casualty\n");
        };

        if (isEmpty(team2)) {
          printf("Team 1 wins\n");
          fprintf(fo, "Team 1 wins\n");
          break;
        };
      } else {
        struct Base attacker = top(team2, 2);
        struct Base victim = top(team1, 1);

        int damage = (attacker.strength - victim.strength) * 0.05 + 50;
        printf("2 hit %d damage\n", damage);
        fprintf(fo, "2 hit %d damage\n", damage);

        dmg(team1, damage);
        victim.health -= damage;

        if (victim.health < 1) {
          pop(team1, 1);
          printf("1 has a casualty\n");
          fprintf(fo, "1 has a casualty\n");
        };

        if (isEmpty(team1)) {
          printf("Team 2 wins\n");
          fprintf(fo, "Team 2 wins\n");
          break;
        };
      }

      turns++;
    } else if (type == 'C') {
      if (turns % 2 == 0) {
        struct Base attacker = top(team1, 1);
        struct Base victim = top(team2, 2);
        
        printf("Critical shot\n");
        fprintf(fo, "Critical shot\n");

        pop(team2, 2);
        printf("2 has a casualty\n");
        fprintf(fo, "2 has a casualty\n");

        if (isEmpty(team2)) {
          printf("Team 1 wins\n");
          fprintf(fo, "Team 1 wins\n");
          break;
        };
      } else {
        struct Base attacker = top(team2, 2);
        struct Base victim = top(team1, 1);
        
        printf("Critical shot\n");
        fprintf(fo, "Critical shot\n");

        pop(team1, 1);
        printf("2 has a casualty\n");
        fprintf(fo, "2 has a casualty\n");

        if (isEmpty(team1)) {
          printf("Team 2 wins\n");
          fprintf(fo, "Team 2 wins\n");
          break;
        };
      }

      turns++;
    } else if (type == 'R') {
      fscanf(fp, " %d\n", &num);

      if (num != 1 && num != 2) {
        printf("Because you didn\'t enter a valid side number (1 or 2), we were unable to add your reinforcement. Please enter a correct side number!\n");
        fprintf(fo, "Because you didn\'t enter a valid side number (1 or 2), we were unable to add your reinforcement. Please enter a correct side number!\n");
        continue;   
      };

      int random_health = rand() % 100 + 1;
      int random_strength = rand() % 999 + 1;
      
      if (num == 1) {
        push(team1, random_health, random_strength);
      } else if (num == 2) {
        push(team2, random_health, random_strength);
      };

      printf("Called reinforcements to the side %d\n", num);
      fprintf(fo, "Called reinforcements to the side %d\n", num);
      printf("S- H:%d S:%d\n", random_health, random_strength);
      fprintf(fo, "S- H:%d S:%d\n", random_health, random_strength);
    }
  }

  fclose(fp);
  fclose(fo);
  destroy(team1);
  destroy(team2);

  return 0;
};