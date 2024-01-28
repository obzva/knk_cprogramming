/*
 * Evaluate an expression
 * (the expression is evaluated from left to right and there is no precedence)
 */

#include <stdio.h>

int main(void)
{
  double input, res = 0;
  char op;

  printf("Enter an expression: ");

  scanf("%lf", &res);

  while ((op = getchar()) != '\n') {
    scanf("%lf", &input);

    switch (op) {
      case '+':
	res = res + input;
	break;
      case '-':
	res = res - input;
	break;
      case '*':
	res = res * input;
	break;
      case '/':
	res = res / input;
	break;
      default:
	printf("Enter only numbers and arithmetic operators\n");
	return 0;
    }
  }

  printf("Value of expression: %f\n", res);

  return 0;
}
