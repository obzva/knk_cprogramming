/*
 * Prints the largest number and the smallest number from 10 numbers
 */

#include <stdio.h>

#define N 10

// Prototype
void max_min(int *curr, int len, int *max, int *min);

int main(void) {
  int b[N];
  int *p;
  int largest, smallest;

  printf("Enter 10 number: ");
  p = b;
  while (p < b + N) scanf(" %d", p++);

  max_min(b, N, &largest, &smallest);

  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);

  return 0;
}

void max_min(int *curr, int n, int *max, int *min) {
  int *p = curr;

  *max = *curr;
  *min = *curr;

  while (p < curr + n) {
    *max = *p > *max ? *p : *max;
    *min = *p < *min ? *p : *min;
    p++;
  }
}
