/*
 * Display the departure and arrival times for the flight
 * whose departure time is closest to that entered by the user
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int hour, minute;
  char c;

  printf("Enter a 12-hour time (hh:mm) and (PM/AM) : ");
  scanf("%d:%d", &hour, &minute);
  
  while (1) {
    c = getchar();
    if (c == 32) {
      continue;
    }
    break;
  }

  c = toupper(c); // to uppercase

  if (c == 80) {
    hour += 12;
  }

  minute += hour * 60;
  
  printf("Closest departure time is ");

  if (minute < 532) {
    printf("8:00 a.m., arriving at 10:16 a.m.\n");
    return 0;
  } else if (minute < 632) {
    printf("9:43 a.m., arriving at 11:52 a.m.\n");
    return 0;
  } else if (minute < 724) {
    printf("11:19 a.m., arriving at 1:31 p.m.\n");
    return 0;
  } else if (minute < 804) {
    printf("12:47 p.m., arriving at 3:00 p.m.\n");
    return 0;
  } else if (minute < 893) {
    printf("2:00 p.m., arriving at 4:08 p.m.\n");
    return 0;
  } else if (minute < 1043) {
    printf("3:45 p.m., arriving at 5:55 p.m.\n");
    return 0;
  } else if (minute < 1223) {
    printf("7:00 p.m., arriving at 9:20 p.m.\n");
    return 0;
  } else {
    printf("9:45 p.m., arriving at 11:58 p.m.\n");
    return 0;
  }
}
