#include <stdio.h>

int main(void)
{
  int first_num, first_denom, second_num, second_denom, res_num, res_denom;

  printf("Enter two fractions separated by a plus sign: ");
  scanf("%d/%d+%d/%d", &first_num, &first_denom, &second_num, &second_denom);

  res_num = first_num * second_denom + second_num * first_denom;
  res_denom = first_denom * second_denom;

  printf("The sum is %d/%d\n", res_num, res_denom);

  return 0;
}
