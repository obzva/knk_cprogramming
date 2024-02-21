/*
 * Computes the value of the following polynomial
 */

#include <stdio.h>

double power(double base, int exponent);

int main (void) {
  double x;

  printf("Enter a value for x: ");
  scanf("%lf", &x);

  printf("\n");
  printf("The computed value of 3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7*x - 6 for the given x is %.3f\n", 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) + 7 * x - 6);

  return 0;
}


double power(double base, int exponent) {
  return exponent == 0 ? 1 : base * power(base, exponent - 1);
}
