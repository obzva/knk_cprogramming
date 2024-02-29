/*
 * Reads a message, then checks whether it's a palindrome or not
 */

#include <stdio.h>
#include <ctype.h>

#define N 100

int main(void) {
  char message[N];
  char *p, *lo, *hi;
  char c;

  p = message;

  printf("Enter a message: ");
  while ((c = getchar()) != '\n') {
    if (isalpha(c)) {
      *p++ = toupper(c);
    }
  }

  lo = message;
  hi = p - 1;
  while (lo < hi) {
    if (*lo++ != *hi--) {
      printf("Not a palindrome\n");
      return 0;
    }
  }

  printf("Palindrome\n");
  
  return 0;
}
