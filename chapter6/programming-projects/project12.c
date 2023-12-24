/* Approximate Euler's constant e 2 */

#include <stdio.h>

int main(void)
{
  float e = 1.0f, term = 1.0f, epsilon;
  int i = 1, denom;

  printf("Enter epsilon (Approximation will stop if the current term smaller than epsilon) : ");
  scanf("%f", &epsilon);

  for (;;i++) {
    denom = 1;
    for (int j = i; j > 0; j--) {
      denom *= j;
    }
    term = 1.0f / denom;
    if (term < epsilon) {
      break;
    }
    e += term;
  }

  printf("e: %f\n", e);

  return 0;
}
