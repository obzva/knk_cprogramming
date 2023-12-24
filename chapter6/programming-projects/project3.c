/* Reduce the fraction to the lowest terms */

#include <stdio.h>

int main(void)
{
  int num, denom, gcd, tmp, remainder;

  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &denom);

  if (num == denom) {
    printf("In lowest terms: 1\n");

    return 0;
  } else if (num > denom) {
    gcd = num;
    tmp = denom;
  } else {
    gcd = denom;
    tmp = num;
  }

  while (tmp > 0) {
    remainder = gcd % tmp;
    gcd = tmp;
    tmp = remainder;
  }

  printf("In lowest terms: %d/%d\n", num / gcd, denom / gcd);

  return 0;
}
