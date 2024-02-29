/*
 * Sorts an array of integers using Quicksort algorithm
 */

#include <stdio.h>

#define N 10

void quicksort(int *low, int *high);
int *split(int *low, int *high);

int main(void) {
  int a[N];
  int *p;

  printf("Enter %d numbers to be sorted: ", N);
  p = a;
  while (p < a + N) scanf("%d", p++);

  quicksort(a, a + N - 1);

  printf("In sorted order: ");
  p = a;
  while (p < a + N) printf("%d ", *p++);
  printf("\n");

  return 0;
}

void quicksort(int *low, int *high) {
  int *middle;

  if (low >= high) {
    return;
  }

  middle = split(low, high);

  quicksort(low, middle - 1);
  quicksort(middle + 1, high);
}

int *split(int *low, int *high) {
  int partition = *low;

  while (1) {
    while (low < high && partition <= *high) {
      high--;
    }
    if (low >= high) {
      break;
    }
    *low = *high;
    low++;

    while (low < high && *low <= partition) {
      low++;
    }
    if (low >= high) {
      break;
    }
    *high = *low;
    high--;
  }

  *high = partition;

  return high;
}
