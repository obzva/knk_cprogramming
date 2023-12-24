/* Find the largest in a series of numbers entered by the user */

#include <stdio.h>

int main(void)
{
  float largest = 0.0f, input;

  for (;;) {
    printf("Enter a number: ");
    scanf("%f", &input);

    if (input <= 0) {
      printf("The largest number entered was %.2f\n", largest);
      return 0;
    } else {
      if (input > largest) {
        largest = input;
      }
    }
  }
}
