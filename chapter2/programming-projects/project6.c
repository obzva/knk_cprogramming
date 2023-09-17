// Modified version of project5.c
// using Horner's Rule

#include <stdio.h>

int main(void)
{
  float x, polynomial;

  printf("Enter a value: ");
  scanf("%f", &x);

  polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("The result: %.3f\n", polynomial);

  return 0;
}
