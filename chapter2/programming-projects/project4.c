#include <stdio.h>

#define PERCENT 1.05f

int main(void)
{
  float amount;
  
  printf("Enter an amount: ");
  scanf("%f", &amount);

  printf("With tax added: $%.2f\n", amount * PERCENT);

  return 0;
}
