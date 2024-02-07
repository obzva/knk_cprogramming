/*
 * Checking anagram
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE 26

int main(void)
{
  int letters[SIZE] = {0}, i;
  char c;

  printf("Enter first word: ");
  while ((c = getchar()) != '\n') {
    if (isalpha(c)) {
      c = tolower(c) - 'a';
      letters[(int) c]++;
    }
  }

  printf("Enter second word: ");
  while ((c = getchar()) != '\n') {
    if (isalpha(c)) {
      c = tolower(c) - 'a';
      letters[(int) c]--;
    }
  }

  for (i = 0; i < SIZE; i++) {
    if (letters[i]) {
      printf("The wrods are not anagrams.\n");
      return 0;
    }
  }

  printf("The words are anagrams.\n");
  
  return 0;
}
