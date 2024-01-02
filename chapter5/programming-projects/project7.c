/*
 * Find the largest and the smallest of four integers
 */

#include <stdio.h>

int main(void)
{
  int largest, smallest, n1, n2, n3, n4;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

  largest = smallest = n1;

  if (n2 > largest) {
    largest = n2;
  } else if (n3 > largest) {
    largest = n3;
  } else if (n4 > largest) {
    largest = n4;
  }

  if (n2 < smallest) {
    smallest = n2;
  } else if (n3 < smallest) {
    smallest = n3;
  } else if (n4 < smallest) {
    smallest = n4;
  }

  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);

  return 0;
}
