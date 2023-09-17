#include <stdio.h>

#define PI 3.14159265359f

int main(void)
{
  float radius = 10.0f, volume;
  
  volume = 4.0f / 3.0f * PI * radius * radius * radius;

  printf("volume: %.2f\n", volume);

  return 0;
}
