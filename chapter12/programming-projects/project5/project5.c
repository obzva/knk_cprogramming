/*
 * Reversing words in a sentence
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 250

int main(void) {
  char sentence[SIZE];
  char *curr, *start, *end, *tmp;
  char terminating_char;

  curr = sentence;

  printf("Enter a sentence: ");
  while (curr - sentence < SIZE) {
    *curr++ = getchar();
    if (*(curr - 1) == '.' || *(curr - 1) == '?' || *(curr - 1) == '!') {
      terminating_char = *(curr - 1);
      break;
    }
  }

  if (curr - sentence == SIZE) {
    printf("Sentence is too long");
    exit(EXIT_FAILURE);
  }

  printf("Reversal of sentence: ");
  start = end = curr - 2;
  while (start > sentence) {
    if (*start == ' ') {
      tmp = start;
      while (tmp < end) printf("%c", *++tmp);
      printf(" ");
      end = start - 1;
    }
    start--;
  }

  while (start <= end) printf("%c", *start++);
  
  printf("%c\n", terminating_char); 

  exit(EXIT_SUCCESS);
}
