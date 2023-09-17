#include <stdio.h>

int main(void)
{
  float loan, rate, payment;
  
  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter yearly interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  loan = loan * (1 + rate / 12 / 100) - payment;
  printf("Balance remaining after first payment:  $%.2f\n", loan);

  loan = loan * (1 + rate / 12 / 100) - payment;
  printf("Balance remaining after second payment: $%.2f\n", loan);

  loan = loan * (1 + rate / 12 / 100) - payment;
  printf("Balance remaining after third payment:  $%.2f\n", loan);

  return 0;
}
