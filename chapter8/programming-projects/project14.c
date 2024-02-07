/*
 * Reversing words in a sentence
 */

#include <stdio.h>

#define SIZE 250

int main(void)
{
  int length = 0, start, end, i;
  char sentence[SIZE] = {0}, terminating_char;

  printf("Enter a sentence: ");
  while (1) {
    if (length == SIZE) {
      printf("Sentence is too long");
      return 1;
    }

    sentence[length] = getchar();
    length++;
    if (sentence[length - 1] == '.' || sentence[length - 1] == '?' || sentence[length - 1] == '!') {
      terminating_char = sentence[length - 1];
      break;
    }
  }

  printf("Reversal of sentence: ");

  end = length - 2;
  for (start = length - 2; start > 0; start--) {
    if (sentence[start] == ' ') {
      for (i = start + 1; i <= end; i++) {
        printf("%c", sentence[i]);
      }
      printf(" ");
      end = start - 1;
    }
  }
  for (i = start; i <= end; i++) {
    printf("%c", sentence[i]);
  }
  printf("%c\n", terminating_char);

  return 0;
}
