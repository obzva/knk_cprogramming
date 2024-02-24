/*
 * Reverse Polish Notation Calculator
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 100

// External variables
int stack[STACK_SIZE];
int top = 0;

// Prototypes
bool is_operator(char ch);
void push(int n);
bool is_full(void);
int pop(void);
bool is_empty(void);
void operate(char ch);
void evaluate(void);

int main(void) {
  char ch;

  while (true) {
    printf("Enter an RPN expression: ");
    while (true) {
      scanf(" %c", &ch);
      if (isdigit(ch)) push((int) (ch - 48));
      else if (is_operator(ch)) operate(ch);
      else if (ch == '=') {
        evaluate();
	break;
      }
      else exit(EXIT_SUCCESS);
    }
  }
}

void push(int n) {
  if (is_full()) {
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
  } else stack[top++] = n;
}

bool is_full(void) {
  return top == STACK_SIZE;
}

bool is_operator(char ch) {
  return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

void operate(char ch) {
  int op1, op2, res;

  op2 = pop();
  op1 = pop();

  switch(ch) {
    case '+':
      res = op1 + op2;
      break;
    case '-':
      res = op1 - op2;
      break;
    case '*':
      res = op1 * op2;
      break;
    case '/':
      if (op2 ==0) {
        printf("Dividing with zero is not allowed\n");
	exit(EXIT_FAILURE);
      } else res = op1 / op2;
      break;
  }

  push(res);
}

int pop(void) {
  if (is_empty()) {
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
    return 1;
  } else return stack[--top];
}

bool is_empty(void) {
  return top == 0;
}

void evaluate(void) {
  printf("Value of expression: %d\n", pop());
}


