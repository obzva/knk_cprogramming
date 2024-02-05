/*
 * Reading 5x5 array of integers and then prints the row sums and the column sums
 */

#include <stdio.h>

#define N 5

int main(void)
{
  int row_sum[N] = {0}, col_sum[N] = {0}, i, j, input;

  for (i = 0; i < N; i++) {
    printf("Enter row %d: ", i + 1);
    for (j = 0; j < N; j++) {
      scanf("%d", &input);
      row_sum[i] += input;
      col_sum[j] += input;
    }
  }

  printf("Row totals:");
  for (i = 0; i < N; i++) {
    printf(" %d", row_sum[i]);
  }
  printf("\n");

   printf("Col totals:");
  for (i = 0; i < N; i++) {
    printf(" %d", col_sum[i]);
  }
  printf("\n");

  return 0;
}
