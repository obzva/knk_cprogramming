/*
 * Checks whether a series of parentheses and/or braces is valid
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

/*
 * External variables
 */
char contents[STACK_SIZE];
int top = 0;

/*
 * Prototypes
 */
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void) {
  char c;
  bool validity = true;

  printf("Enter parentheses and/or braces: ");
  while ((c = getchar()) == ' ');
  while (true) {
    if (c == ' ' || c == '\n') break;

    if (c == ')') {
      if (pop() != '(') {
        validity = false;
        break;
      }
    } else if (c == '}') {
      if (pop() != '{') {
        validity = false;
        break;
      }    
    } else push(c);

    c = getchar();
  }
  if (!is_empty()) validity = false;

  printf("Parentheses/braces ");
  if (validity) printf("are nested properly\n");
  else printf("aren't nested properly\n");

  exit(EXIT_SUCCESS);
}


bool is_empty(void) {
  return top == 0;
}

bool is_full(void) {
  return top == STACK_SIZE;
}

void push(char c) {
  if (is_full()) stack_overflow();
  else contents[top++] = c;
}

char pop(void) {
  if (is_empty()) {
    stack_underflow();
    return '1';
  }
  else return contents[--top];
}

void stack_overflow(void) {
  printf("Stack overflow");
  exit(EXIT_FAILURE);
}

void stack_underflow(void) {
  printf("Parentheses/braces aren't nested properly\n");
  printf("Stack underflow");
  exit(EXIT_FAILURE);
}
