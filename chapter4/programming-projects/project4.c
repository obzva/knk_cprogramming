#include <stdio.h>

int main(void)
{
  int n, a1, a2, a3, a4, a5;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &n);

  a5 = n % 8;

  n /= 8;
  a4 = n % 8;

  n /= 8;
  a3 = n % 8;

  n /= 8;
  a2 = n % 8;

  n /= 8;
  a1 = n % 8;

  printf("In octal, your number is: %d%d%d%d%d\n", a1, a2, a3, a4, a5);

  return 0;
}
