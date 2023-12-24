/* Even squares between 1 and n */

#include <stdio.h>

int main(void)
{
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (int square = 4, gap = 12; square <= n; square += gap, gap += 8) {
    printf("%d\n", square);
  }

  return 0;
}
