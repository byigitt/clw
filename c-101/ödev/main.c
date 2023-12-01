#include <string.h>
#include <stdio.h>
#include <ctype.h>

int is_palindromic(char str[]) {
  int l = 0;
  int h = strlen(str) - 1;

  while (l<h) {
    while (!isalnum(str[l]) && l<h) l++;
    while (!isalnum(str[h]) && l<h) h--;
    if (str[0] == '!') {
      if (tolower(str[l++]) != tolower(str[h--])) {
        return 0;
      };
    } else {
      if (str[l++] != str[h--]) {
        return 0;
      };
    }
  };

  return 1;
};

int main() {
  int score = 0;
  if (is_palindromic("elma") == 0) score += 5;
  if (is_palindromic("yapay") == 1) score += 5;
  if (is_palindromic("7895987") == 1) score += 5;
  if (is_palindromic("Eski dediysE") == 0) score += 10;
  if (is_palindromic("Anastas mum satsanA") == 1) score += 10;
  if (is_palindromic("Kasaya mal koyana yoklama yasaK") == 1) score += 20;
  if (is_palindromic("Eli bitti bile") == 0) score += 20;
  if (is_palindromic("!iMrEnSeM aDaMa mAdAm EsNeR mi!") == 1) score += 25;

  printf("puan: %d", score);
  return 0;
}