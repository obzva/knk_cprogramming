#include <stdio.h>

int main(void)
{
  int i = 12345;
  float j = 123.4567;

  printf("   i: %d\n", i);
  printf("   j: %f\n", j);
  printf("\n");

  printf("   d: %d\n", i);
  printf(".10d: %.10d\n", i);
  printf("   e: %e\n", j);
  printf(" .3e: %.3e\n", j);
  printf("   f: %f\n", j);
  printf(" .3f: %.3f\n", j);
  printf("   g: %g\n", j);
  printf(" .5g: %.3g\n", j);

  return 0;
}
