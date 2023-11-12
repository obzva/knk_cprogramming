#include <stdio.h>

int main(void)
{
  int i, j, m, n;

  i = 1;
  j = 2;

  printf("i, j: %d, %d\n", i, j);

  m = -i++;
  n = -++j;

  printf("i, j, m, n: %d, %d, %d, %d\n", i, j, m, n);

  return 0;
}
