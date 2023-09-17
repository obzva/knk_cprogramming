// Enter a U.S. dollar amount and then it will show how to pay
// that amount using the smallest number of $20, $10, $5, and $1 bills.

#include <stdio.h>

int main(void)
{
  int amount, twenty, ten, five, one;

  printf("Enter an amount: ");
  scanf("%d", &amount);

  twenty = amount / 20;
  amount = amount - 20 * twenty;

  ten = amount / 10;
  amount = amount - 10 * ten;

  five = amount / 5;
  amount = amount - 5 * five;

  one = amount;

  printf("$20 bills: %d\n", twenty);
  printf("$10 bills: %d\n", ten);
  printf(" $5 bills: %d\n", five);
  printf(" $1 bills: %d\n", one);

  return 0;
}
