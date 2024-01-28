/*
 * Enter 12-hour time with PM / AM
 * this will convert it to 24-hour time
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int hour, minute;
  char c;

  printf("Enter a 12-hour time (HH:MM PM/AM) : ");
  scanf("%d:%d", &hour, &minute);
  
  while (1) {
    c = getchar();
    if (c == 32) {
      continue;
    }
    break;
  }

  c = toupper(c);
  if (c == 80) {
    hour += 12;
  }

  printf("Equivalent 24-hour time: %d:%d\n", hour, minute);

  return 0;
}
