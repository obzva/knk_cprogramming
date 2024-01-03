/* 
 * indicate which date comes earlier from two dates entered
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int m1, m2, d1, d2, y1, y2;

  bool is_first;

  printf("Enter first date (mm/dd/yy) : ");
  scanf("%d/%d/%d", &m1, &d1, &y1);

  printf("Enter first date (mm/dd/yy) : ");
  scanf("%d/%d/%d", &m2, &d2, &y2);

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
      } else if (d1 < d2) {
        is_first = true;
      } else {
        printf("Two dates are same\n");
	return 0;
      }
    }
  }

  if (is_first) {
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m1, d1, y1, m2, d2, y2);
  } else {
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m2, d2, y2, m1, d1, y1);
  }

  return 0;
}
