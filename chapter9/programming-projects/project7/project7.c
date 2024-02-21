/*
 * Improved power function
 */

#include <stdio.h>

double power(double base, int exp);

int main(void) {
  double x;
  int n;

  printf("Enter a number for base: ");
  scanf("%lf", &x);

  printf("Enter a number for exponent: ");
  scanf("%d", &n);

  printf("\nThe result of %f to the %d is %f\n", x, n, power(x, n));

  return 0;
}


double power(double base, int exp) {
  double tmp;

  if (exp == 0) return 1;
  if (exp % 2 == 0) {
    tmp = power(base, exp / 2);
    return tmp * tmp;
  } 
  return base * power(base, exp - 1);
}
