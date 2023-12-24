/* Print calendar */

#include <stdio.h>

int main(void)
{
  int days, start;

  printf("Enter number of days in month: ");
  scanf("%d", &days);

  printf("Enter starting day of the week (1=Sun, 7=Sat) : ");
  scanf("%d", &start);

  days += start - 1;

  for (int i = 1; i <= days; i++) {
    if (i < start) {
      printf("   ");
    } else {
      printf("%2d ", i - start + 1);
    }

    if (i == days || i % 7 == 0) {
      printf("\n");
    }
  }

  return 0;
}
