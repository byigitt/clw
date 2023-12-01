#include <stdio.h>

struct Employee {
  int id;
  int age;
  int salary;
};

void minimumAge(struct Employee x[3]) {
  int minimum = 0;
  for (int i = 0; i < 3; i++) {
    if (minimum == 0 || x[i].age < minimum)
      minimum = x[i].age;
  };

  printf("\nMinimum age is: %d", minimum);
};

void averageAge(struct Employee x[3]) {
  int sum = 0;
  for (int i = 0; i < 3; i++) {
    sum += x[i].age;
  };

  printf("\nAverage age is: %d", sum/3);
};

void minimumSalary(struct Employee x[3]) {
  int minimum = 0;
  for (int i = 0; i < 3; i++) {
    if (minimum == 0 || x[i].salary < minimum)
      minimum = x[i].salary;
  };

  printf("\nMinimum salary is: %d", minimum);
};

void averageSalary(struct Employee x[3]) {
  int sum = 0;
  for (int i = 0; i < 3; i++) {
    sum += x[i].salary;
  };

  printf("\nAverage salary is: %d", sum/3);
};

int main () {
  struct Employee myEmployees[3];

  for (int i = 0; i < 3; i++) {
    printf("Enter id, age, salary: ");
    scanf("%d %d %d", &myEmployees[i].id, &myEmployees[i].age, &myEmployees[i].salary);
  };

  minimumAge(myEmployees);
  averageAge(myEmployees);
  minimumSalary(myEmployees);
  averageSalary(myEmployees);
  return 0;
};