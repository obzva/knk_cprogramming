/*
 * Reads a message, then prints the reversal of the message
 */

#include <stdio.h>

#define N 100

// Prototypes
void store_message(int *top, char *container);
void print_reversed_message(int *top, char *container);

int main(void) {
  char message[N];
  int top = 0;

  store_message(&top, message);
  print_reversed_message(&top, message);

  return 0;
}

void store_message(int *top, char *container) {
  char c;

  printf("Enter a message: ");

  while ((c= getchar()) != '\n' && *top < N) {
    *(container + *top) = c;
    *top += 1;
  }
}

void print_reversed_message(int *top, char *container) {
  printf("Reversal is: ");

  while (*top > 0) {
    *top -= 1;
    printf("%c", *(container + *top));
  }
  printf("\n");
}
