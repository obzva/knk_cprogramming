/*
 * Reverses a series of numbers (pointer version)
 */

#include <stdio.h>

#define N 10

int main(void) {
  int a[N];
  int *p;

  printf("Enter 10 numbers: ");

  p = a;
  while (p < a + N) scanf(" %d", p++);
  
  printf("In reverse: ");
  while (p > a) printf("%d ", *--p);
  printf("\n");

  return 0;
}
