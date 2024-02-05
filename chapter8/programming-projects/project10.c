/*
 * Display the departure and arrival times for the flight
 * whose departure time is closest to that entered by the user
 */

#include <stdio.h>

#define SIZE (int) (sizeof departure / sizeof departure[0])

int main(void)
{
  int hour, minute, departure[] = {480, 583, 679, 767, 840, 945, 1140, 1305}, arrival[] = {676, 712, 811, 900, 968, 1075, 1280, 1438}, diff[SIZE], i, min_index = 0;

  printf("Enter a 24-hour time (hh:mm) : ");
  scanf("%d:%d", &hour, &minute);

  minute += hour * 60;

  for (i = 0; i < SIZE; i++) {
    diff[i] = departure[i] < minute ? minute - departure[i] : departure[i] - minute;
    min_index = diff[min_index] > diff[i] ? i : min_index;
  }

  printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
		  departure[min_index] / 60 > 12 ? departure[min_index] / 60 - 12 : departure[min_index] / 60,
		  departure[min_index] % 60,
		  departure[min_index] < 720 ? 'a' : 'p',
		  arrival[min_index] / 60 > 12 ? arrival[min_index] / 60 - 12 : arrival[min_index] / 60,
		  arrival[min_index] % 60,
		  arrival[min_index] < 720 ? 'a' : 'p');

  return 0;
}
