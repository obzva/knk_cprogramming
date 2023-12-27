#include <stdio.h>

int main(void)
{
  int x, y, z;

  printf("Enter a two-digit number: ");
  scanf("%1d%1d%1d", &x, &y, &z);

  printf("The reversal is: %d%d%d\n", z, y, x);

  return 0;
}
