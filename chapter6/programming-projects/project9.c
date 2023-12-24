/* Loan Balance */

#include <stdio.h>

int main(void)
{
  float loan, rate, payment;
  int num;
  
  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter yearly interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);
  printf("Enter the number of payments: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    loan = loan * (1 + rate / 12 / 100) - payment;

    if (loan < 0) {
      loan = 0;
    }

    printf("Balance remaining after payment %2d:  $%.2f\n", i, loan);

    if (loan == 0) {
      break;
    }
  }

  return 0;
}
