/*
 * Takes a first name and last name
 * and displays the last name, a comma, and the first initial, followed by a period
 */

#include <stdio.h>

#define SIZE 20

int main(void)
{
  int length = 0, i;
  char initial, last_name[SIZE], c;

  printf("Enter a first and last name: ");
  
  // get initial of the first name
  while ((initial = getchar()) == ' ');

  // skip the remaining letters
  while (getchar() != ' ');

  // skip the space between the first name and the last name
  while ((c = getchar()) == ' ');

  // print the last name characters until space or new line
  do {
    last_name[length] = c;
    length++;
  } while ((c = getchar()) != '\n' && c != ' ');

  for (i = 0; i < length; i++) {
    printf("%c", last_name[i]);
  }
  printf(", %c.\n", initial);

  return 0;
}
