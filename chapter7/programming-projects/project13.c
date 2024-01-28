/*
 * Calculate the average word length for a sentence
 */

#include <stdio.h>

int main(void)
{
  double sum = 0;
  int cnt = 1;
  char c;

  printf("Enter a sentence: ");

  while (1) {
    c = getchar();

    if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || c == '.') {
      sum += 1;
    } else if (c == ' ') {
      cnt += 1;
    } else if (c == '\n') {
      break;
    } else {
      printf("You entered invalid character.\n");
      return 0;
    }
  }

  printf("Average word length: %.1f\n", sum / cnt);

  return 0;
}
