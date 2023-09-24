#include <stdio.h>

int main(void)
{
  int zero_zero, zero_one, zero_two, zero_three, one_zero, one_one, one_two, one_three, two_zero, two_one, two_two, two_three, three_zero, three_one, three_two, three_three, row_zero, row_one, row_two, row_three, col_zero, col_one, col_two, col_three, dia_tl_br, dia_tr_bl;

  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &zero_zero, &zero_one, &zero_two, &zero_three, &one_zero, &one_one, &one_two, &one_three, &two_zero, &two_one, &two_two, &two_three, &three_zero, &three_one, &three_two, &three_three);

  row_zero = zero_zero + zero_one + zero_two + zero_three;
  row_one = one_zero + one_one + one_two + one_three;
  row_two = two_zero + two_one + two_two + two_three;
  row_three = three_zero + three_one + three_two + three_three;

  col_zero = zero_zero + one_zero + two_zero + three_zero;
  col_one = zero_one + one_one + two_one + three_one;
  col_two = zero_two + one_two + two_two + three_two;
  col_three = zero_three + one_three + two_three + three_three;

  dia_tl_br = zero_zero + one_one + two_two + three_three;
  dia_tr_bl = zero_three + one_two + two_one + three_zero;

  printf("%2d %2d %2d %2d\n", zero_zero, zero_one, zero_two, zero_three);
  printf("%2d %2d %2d %2d\n", one_zero, one_one, one_two, one_three);
  printf("%2d %2d %2d %2d\n", two_zero, two_one, two_two, two_three);
  printf("%2d %2d %2d %2d\n", three_zero, three_one, three_two, three_three);

  printf("Row sums: %d %d %d %d\n", row_zero, row_one, row_two, row_three);
  printf("Column sums: %d %d %d %d\n", col_zero, col_one, col_two, col_three);
  printf("Diagonal sums: %d %d\n", dia_tl_br, dia_tr_bl);

  return 0; 
}
