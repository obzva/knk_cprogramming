#include <stdio.h>

int main(void)
{
  int i;
  printf("Enter a two-digit number: ");
  scanf("%2d", &i);
  printf("The reversal is: %d\n", i % 10 * 10 + i / 10);
  return 0;
}
