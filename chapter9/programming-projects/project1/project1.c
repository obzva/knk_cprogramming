/*
 * Selection sort
 */

#include <stdio.h>

#define N 10

void selection_sort(int a[], int n);

int main(void) {
  int a[N], i;

  printf("Enter %d numbers: ", N);
  for (i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }

  selection_sort(a, N);

  printf("The result is: ");
  for (i = 0; i < N; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}

void selection_sort(int a[], int n) {
  int biggest = a[n - 1], tmp, i;

  if (n == 1) return;

  for (i = 0; i < n - 1; i++) {
    if (a[i] > biggest) {
      tmp = a[i];
      a[n - 1] = tmp;
      a[i] = biggest;
      biggest = tmp;
    }
  }

  selection_sort(a, n - 1);
}
