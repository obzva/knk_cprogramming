/*
 * Checking whether any of the digits in a number appear more than once
 * and show which digits appears more than once
 */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
  bool any_repeat = false;
  int digit_cnt[10] = {0};
  long digit, n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    if (digit_cnt[digit]) {
      if (!any_repeat) {
        any_repeat = true;
      }
    }
    digit_cnt[digit]++;
    n /= 10;
  }

  if (any_repeat) {
    printf("Repeated digit(s):");
    for (int i = 0; i < 10; i++) {
      if (digit_cnt[i] > 1) {
        printf(" %d", i);
      }
    }
    printf("\n");
  } else {
    printf("No repeated digit\n");
  }
   
  return 0;
}
