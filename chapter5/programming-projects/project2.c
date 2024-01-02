/* 24-hour time to 12-hour time */

#include <stdio.h>

int main(void)
{
  int hour, minute;

  printf("Enter a 24-hour time (hh:mm) : ");
  scanf("%d:%d", &hour, &minute);

  printf("Equivalent 12-hour time: ");

  if (hour > 12) {
    printf("%d:%.2d ", hour - 12, minute);
  } else {
    printf("%d:%.2d ", hour, minute);
  }

  if (hour >= 12) {
    printf("PM\n");
  } else {
    printf("AM\n");
  }

  return 0;
}
