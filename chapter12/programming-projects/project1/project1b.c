/*
 * Reads a message, then prints the reversal of the message
 */

#include <stdio.h>

#define N 100


int main(void) {
  char message[N];
  char *p;
  char c;

  p = message;

  printf("Enter a message: ");
  while ((c = getchar()) != '\n' && p < message + N) *p++ = c;

  printf("Reversal is: ");
  while (p > message) printf("%c", *--p);
  printf("\n");

  return 0;
}
