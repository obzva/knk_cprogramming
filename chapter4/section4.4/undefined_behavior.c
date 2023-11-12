#include <stdio.h>

int main(void)
{
  int a, b, c, d, e;

  a = 5;
  c = (b = a + 2) - (a = 1);

  printf("a, b, c: %d, %d, %d\n", a, b, c);

  d = 2;
  printf("d = %d\n", d);

  e = d * d++;
  printf("e = %d\n", e);

  return 0;
}
