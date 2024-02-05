/*
 * Checking whether any of the digits in a number appear more than once
 * and print a table showing how many times each digit appears in the number
 */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
  int digit_cnt[10] = {0};
  long digit, n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    digit_cnt[digit]++;
    n /= 10;
  }

  printf("Repeated digit(s):	0	1	2	3	4	5	6	7	8	9\n");
  printf("Occurrences:	");
  for (int i = 0; i < 10; i++) {
    printf("	%d", digit_cnt[i]);
  }
  printf("\n");
   
  return 0;
}
