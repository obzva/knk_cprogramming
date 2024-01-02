/* How many digits? */

#include <stdio.h>

int main(void)
{
  int n, digit = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (0 <= n && n < 10) {
    digit = 1;
  } else if (10 <= n && n < 100) {
    digit = 2;
  } else if (100 <= n && n < 1000) {
    digit = 3;
  } else if (1000 <= n) {
    digit = 4;
  }

  printf("The number %d has %d digits\n", n, digit);

  return 0;
}
