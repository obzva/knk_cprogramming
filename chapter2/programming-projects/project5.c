#include <stdio.h>

int main(void)
{
  float x;

  printf("Enter a value: ");
  scanf("%f", &x);

  printf("The result: %.3f\n", 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6);

  return 0;
}
