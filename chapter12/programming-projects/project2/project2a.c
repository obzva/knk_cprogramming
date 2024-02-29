/*
 * Reads a message, then checks whether it's a palindrome or not
 */

#include <stdio.h>
#include <ctype.h>

#define N 100

int main(void) {
  char message[N];
  int top = 0, lo, hi;
  char c;

  printf("Enter a message: ");
  while ((c = getchar()) != '\n') {
    if (isalpha(c)) {
      message[top++] = toupper(c);
    }
  }

  lo = 0;
  hi = top - 1;
  while (lo < hi) {
    if (message[lo++] != message[hi--]) {
      printf("Not a palindrome\n");
      return 0;
    }
  }

  printf("Palindrome\n");
  
  return 0;
}
