#include <stdio.h>

int main(void)
{
  int i, j = 0;

  printf("Enter a two-digit number: ");
  scanf("%3d", &i);

  j = j * 10 + i % 10;
  i /= 10;
  j = j * 10 + i % 10;
  i /= 10;
  j = j * 10 + i % 10;


  printf("The reversal is: %d\n", j);

  return 0;
}
