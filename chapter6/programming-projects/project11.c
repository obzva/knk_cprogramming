/* Approximate Euler's constant e */

#include <stdio.h>

int main(void)
{
  float e = 1.0f, term;
  int n, denom;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    denom = 1;
    for (int j = i; j > 0; j--) {
      denom *= j;
    }
    term = 1.0f / denom;
    e += term;
  }

  printf("e: %f\n", e);

  return 0;
}
