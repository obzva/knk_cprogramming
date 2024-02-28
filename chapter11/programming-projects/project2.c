/*
 * Display the departure and arrival times for the flight
 * whose departure time is closest to that entered by the user
 */

#include <stdio.h>

// Prototypes
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
  int hour, minute, departure, arrival;

  printf("Enter a 24-hour time (hh:mm) : ");
  scanf("%d:%d", &hour, &minute);

  minute += hour * 60;

  find_closest_flight(minute, &departure, &arrival);
  
  printf("Closest departure time is %d:%02d %c.m., arriving at %d:%02d %c.m.\n", departure / 60 > 12 ? departure / 60 - 12 : departure / 60, departure % 60, departure < 720 ? 'a' : 'p', arrival / 60 > 12 ? arrival / 60 - 12 : arrival / 60, arrival % 60, arrival < 720 ? 'a' : 'p');

  return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
  if (desired_time < 532) {
    *departure_time = 480;
    *arrival_time = 616;
  } else if (desired_time < 632) {
    *departure_time = 583;
    *arrival_time = 712;
  } else if (desired_time < 724) {
    *departure_time = 679;
    *arrival_time = 811;
  } else if (desired_time < 804) {
    *departure_time = 767;
    *arrival_time = 900;
  } else if (desired_time < 893) {
    *departure_time = 840;
    *arrival_time = 968;
  } else if (desired_time < 1043) {
    *departure_time = 945;
    *arrival_time = 1075;
  } else if (desired_time < 1223) {
    *departure_time = 1140;
    *arrival_time = 1280;
  } else {
    *departure_time = 1305;
    *arrival_time = 1438;
  }
}
