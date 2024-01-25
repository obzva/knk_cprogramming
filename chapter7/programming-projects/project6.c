#include <stdio.h>

int main(void)
{
  printf("sizeof(int)        | %zu bytes\n", sizeof(int));
  printf("sizeof(short)      | %zu bytes\n", sizeof(short));
  printf("sizeof(long)       | %zu bytes\n", sizeof(long));
  printf("sizeof(float)      | %zu bytes\n", sizeof(float));
  printf("sizeof(double)     | %zu bytes\n", sizeof(double));
  printf("sizeof(long double)| %zu bytes\n", sizeof(long double));

  return 0;
}
