#include <stdio.h>

#define PI 3.14159265359f

int main(void)
{
  float radius, volume;

  printf("Enter the radius of the sphere: ");
  scanf("%f", &radius);
  
  volume = 4.0f / 3.0f * PI * radius * radius * radius;

  printf("The volume of the sphere: %.2f\n", volume);

  return 0;
}
