/* 
 * Add a loop to the chapter5 project9.c so that users can enter any number of dates
 * Indicate which date comes earliest from the dates entered
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int m1 = 99, m2, d1 = 99, d2, y1 =99, y2;
  bool is_first;

  for (;;) {
    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if (m2 == 0 && d2 == 0 && y2 ==0) {
      break;
    }

    if (m2 < 1 || 12 < m2) {
      printf("Error: Invalid month\n");
      return 0;
    } 

    if (d2 < 1 || 31 < d2) {
      printf("Error: Invalid date\n");
      return 0;
    }

    if (y1 > y2) {
      is_first = false;
    } else if (y1 < y2) {
      is_first = true;
    } else {
      if (m1 > m2) {
        is_first = false;
      } else if (m1 < m2) {
        is_first = true;
      } else {
        if (d1 > d2) {
          is_first = false;
        } else {
          is_first = true;
        }
      }
    }

    if (!is_first) {
      m1 = m2;
      d1= d2;
      y1 = y2;
    }
  }

  if (m1 == 99) {
    printf("Error: You didn't entered any date\n");
    return 0;
  }

  printf("%d/%d/%.2d is the earliest date\n", m1, d1, y1);

  return 0;
}
