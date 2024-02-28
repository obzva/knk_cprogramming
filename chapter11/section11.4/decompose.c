/*
 * Decompose float number into integer part and fraction part
 */

#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part);

int main(void) {
  double x;

  long i;
  double f;

  printf("Enter a number: ");
  scanf("%lf", &x);

  decompose(x, &i, &f);

  printf("integer part:  %ld\n", i);
  printf("fraction part: %f\n", f);

  return 0;
}



void decompose(double x, long *int_part, double *frac_part) {
  *int_part = (long) x;
  *frac_part = x - *int_part;
}
