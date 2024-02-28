/*
 * Enter a U.S. dollar amount and then it will show how to pay 
 * that amount using the smallest number of $20, $10, $5, and $1 bills.
 */

#include <stdio.h>

//Prototypes
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
  int amount, twenty, ten, five, one;

  printf("Enter an amount: ");
  scanf("%d", &amount);

  pay_amount(amount, &twenty, &ten, &five, &one);

  printf("$20 bills: %d\n", twenty);
  printf("$10 bills: %d\n", ten);
  printf(" $5 bills: %d\n", five);
  printf(" $1 bills: %d\n", one);

  return 0;
}


void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
  *twenties = dollars / 20;
  dollars = dollars - 20 * *twenties;

  *tens = dollars / 10;
  dollars = dollars - 10 * *tens;

  *fives = dollars / 5;
  dollars = dollars - 5 * *fives;

  *ones = dollars;
}
