/*
 * Enter interest rate and number of years
 * this program will show the chart
 */

#include <stdio.h>

#define N 5

int main(void)
{
  double numbers[N] = { 100, 100, 100, 100, 100 };
  int interest, years, i, j;

  printf("Enter interest rate: ");
  scanf("%d", &interest);

  printf("Enter number of years: ");
  scanf("%d", &years);

  printf("\n");


  printf("Years	%d%%\t%d%%\t%d%%\t%d%%\t%d%%\n", interest, interest + 1, interest + 2, interest + 3, interest + 4);

  for (i = 1; i <= years; i++) {
    printf("%d\t", i);
    for (j = 0; j < N; j++) {
      numbers[j] *= (100 + interest + j);
      numbers[j] /= 100;
      printf("%.2lf", numbers[j]);
      if (j == N - 1) {
        printf("\n");
      } else {
        printf("\t");
      }
    }
  }

  return 0;
}
