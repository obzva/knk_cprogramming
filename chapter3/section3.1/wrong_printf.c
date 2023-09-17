// If you compile this file, warning will occur

#include <stdio.h>

int main(void)
{
  int i = 10, j = 9;
  float x = 3.14;
  
  printf("%d %d\n", i); // wrong
  printf("%d\n", i, j); // wrong
  printf("%f %d\n", i, x); // wrong

  return 0;
}
