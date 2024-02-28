/* Reduce the fraction to the lowest terms */

#include <stdio.h>

// Prototypes
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
  int num, denom;

  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &denom);

  reduce(num, denom, &num, &denom);

  printf("In lowest terms: %d/%d\n", num, denom);

  return 0;
}


void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {
  int gcd, tmp, remainder;

  if (numerator == denominator) {
    *reduced_numerator = 1;
    *reduced_denominator = 1;
    return;
  } else {
    if (numerator > denominator) {
      gcd = numerator;
      tmp = denominator;
    } else {
      gcd = denominator;
      tmp = numerator;
    }
  }

  while (tmp > 0) {
    remainder = gcd % tmp;
    gcd = tmp;
    tmp = remainder;
  }

  *reduced_numerator = numerator / gcd;
  *reduced_denominator = denominator / gcd;
}
