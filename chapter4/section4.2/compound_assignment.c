#include <stdio.h>

int main(void)
{
  int i, j, k, v;
  
  i = 3;
  j = 4;
  k = 5;

  i = i * j + k;

  printf("i * j + k = %d\n", i);
  
  i = 3;
  i *= j + k;
 
  printf("i *= j + k : %d\n", i);

  v = 6;
  v += j += k;

  printf("v += j += k: %d\n", v);

  return 0;
}
