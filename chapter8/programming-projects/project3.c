/*
 * Enter numbers (input will be terminated if you enter a number less than or equal to zero)
 * Checking whether any of the digits in a number appear more than once
 */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
  bool digit_seen[10] = {false}, is_repeated = false;
  long digit, n;

  printf("Enter numbers: ");
  scanf("%ld", &n);

  // outer loop for numbers
  do {
    printf("Number %ld:	", n);

    // inner loop for digits of the current number
    while (n > 0) {
      digit = n % 10;
      if (digit_seen[digit]) {
	is_repeated = true;
	break;
      }
      digit_seen[digit] = true;
      n /= 10;
    }
    if (is_repeated) {
      printf("Repeated digit\n");  
    } else {
      printf("No repeated digit\n");
    }

    // next number
    scanf("%ld", &n);
    // re-initialize the bool variables
    for (int j = 0; j < 10; j++) {
      digit_seen[j] = false;
    }
    is_repeated = false;
  } while (n > 0);

  return 0;
}
