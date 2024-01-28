/*
 * Computing square root of a positive floating-point number
 * using Newton's method
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
  double x, y = 1, new_y = 1;

  printf("Enter a positive number: ");
  scanf("%lf", &x);
  
  printf("----------------------------------------------------------\n");
  printf(" x           y           x/y         Average of y and x/y \n");
  printf("----------------------------------------------------------\n");

  do {
    y = new_y;
    new_y = (y + x / y) / 2;

    printf(" %-12.5f%-12.5f%-12.5f%-.5f \n", x, y, x / y, new_y);
  } while (fabs(y - new_y) >= .00001);

  printf("----------------------------------------------------------\n");
  printf("Square root: %.5f\n", new_y);

  return 0;
}
