/* Display digits in reverse order */

#include <stdio.h>

int main(void)
{
  int input;

  printf("Enter a number: ");
  scanf("%d", &input);

  do {
    printf("%d ", input % 10);
    input /= 10;
  } while (input > 0);

  printf("\n");

  return 0;
}
