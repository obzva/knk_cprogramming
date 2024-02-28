/*
 * Prints the largest number and the smallest number from 10 numbers
 */

#include <stdio.h>

#define N 10

// Prototype
void max_min(int num[], int len, int *max, int *min);

int main(void) {
  int b[N];
  int i, largest, smallest;

  printf("Enter 10 number: ");
  for (i = 0; i < N; i++) scanf(" %d", &b[i]);

  max_min(b, N, &largest, &smallest);

  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);

  return 0;
}

void max_min(int num[], int len, int *max, int *min) {
  int i;

  *max = num[0];
  *min = num[0];

  for (i = 1; i < len; i++) {
    *max = num[i] > *max ? num[i] : *max;
    *min = num[i] < *min ? num[i] : *min;
  }
}
