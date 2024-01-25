#include <stdio.h>

int main(void)
{
  int first_num, first_denom, second_num, second_denom, res_num, res_denom;
  char operator;


  printf("Enter two fractions separated by an operator: ");
  scanf("%d/%d%c%d/%d", &first_num, &first_denom, &operator, &second_num, &second_denom);

  if (operator == 43) {
    res_num = first_num * second_denom + second_num * first_denom;
    res_denom = first_denom * second_denom;
  } else if (operator == 45) {
    res_num = first_num * second_denom - second_num * first_denom;
    res_denom = first_denom * second_denom;
  } else if (operator == 42) {
    res_num = first_num * second_num;
    res_denom = first_denom * second_denom;
  } else {
    res_num = first_num * second_denom;
    res_denom = first_denom * second_num;
  }

  printf("The res is %d/%d\n", res_num, res_denom);

  return 0;
}
