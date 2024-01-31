/*
 * Checking whether any of the digits in a number appear more than once
 */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
  bool digit_seen[10] = {false};
  long digit, n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit]) {
      printf("Repeated digit\n");
      return 0;
    }
    digit_seen[digit] = true;
    n /= 10;
  }

  printf("No repeated digit\n");
  return 0;
}
