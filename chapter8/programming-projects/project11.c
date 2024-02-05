/*
 * Converts input into numbers
 * based on cellphone keypad
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char input[15];
  int i = 0;

  printf("Enter phone number: ");

  while ((input[i] = toupper(getchar())) != '\n') i++;

  printf("\n");
  printf("The result        : ");

  i = 0;
  while (input[i] != '\n') {
    if ('A' <= input[i] && input[i] <= 'C') printf("%d", 2);
    else if ('D' <= input[i] && input[i] <= 'F') printf("%d", 3);
    else if ('G' <= input[i] && input[i] <= 'I') printf("%d", 4);
    else if ('J' <= input[i] && input[i] <= 'L') printf("%d", 5);
    else if ('M' <= input[i] && input[i] <= 'O') printf("%d", 6);
    else if ('P' <= input[i] && input[i] <= 'S') printf("%d", 7);
    else if ('T' <= input[i] && input[i] <= 'V') printf("%d", 8);
    else if ('W' <= input[i] && input[i] <= 'Y') printf("%d", 9);
    else printf("%c", input[i]);
    i++;
  }

  printf("\n");

  return 0;
}
