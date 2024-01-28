/*
 * Takes a first name and last name
 * and displays the last name, a comma, and the first initial, followed by a period
 */

#include <stdio.h>

int main(void)
{
  char initial, c;

  printf("Enter a first and last name: ");
  
  // get initial of the first name
  while ((initial = getchar()) == 32);

  // skip the remaining letters
  while (getchar() != 32);

  // skip the space between the first name and the last name
  while ((c = getchar()) == 32);


  // print the last name characters until space or new line
  do {
    putchar(c);
  } while ((c = getchar()) != 10 && c != 32);

  printf(", %c.\n", initial);

  return 0;
}
