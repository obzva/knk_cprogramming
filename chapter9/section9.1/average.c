/*
 * Averaging a pair of numbers
 */

#include <stdio.h>

double average(double a, double b)
{
  return (a + b) / 2;
}

int main(void)
{
  double p, q, r;

  printf("Enter three numbers: ");
  scanf("%lf %lf %lf", &p, &q, &r);

  printf("Average of %g and %g: %g\n", p, q, average(p, q));
  printf("Average of %g and %g: %g\n", q, r, average(q, r));
  printf("Average of %g and %g: %g\n", p, r, average(p, r));

  return 0;
}
