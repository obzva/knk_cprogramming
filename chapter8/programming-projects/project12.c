/*
 * SCRABBLE
 * see chapter7 project5
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int sum = 0, face_values[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
  char c;

  printf("Enter a word: ");

  while ((c = toupper(getchar())) != '\n') {
    sum += face_values[(int) (c - 'A')];
  }

  printf("Scrabble value: %d\n", sum);

  return 0;
}
