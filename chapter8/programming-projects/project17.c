/*
 * Printing nxn magic square
 */

#include <stdio.h>

int main(void)
{
  int n, row, col, cnt = 0;

  printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square: ");
  scanf("%d", &n);

  if (n % 2 != 1 || n < 1 || n > 99) {
    printf("Invalid size\n");
    return 1;
  }

  int A[n][n];
  for (row = 0; row < n; row++) {
    for (col = 0; col < n; col++) {
      A[row][col] = 0;
    }
  }
  
  row = 0;
  col = n / 2;
  A[row][col] = cnt + 1;
  cnt++;
  
  while (cnt < n * n) {
    if (!A[(row - 1 + n) % n][(col + 1) % n]) {
      row = (row - 1 + n) % n;
      col = (col + 1) % n;
    } else {
      row = (row + 1) % n;
    }

    A[row][col] = cnt + 1;
    cnt++;
  }

  printf("\n");
  for (row = 0; row < n; row++) {
    for (col = 0; col < n; col++) {
      printf("%d", A[row][col]);
      printf("%c", col == n -1 ? '\n' : '\t');
    }
  }

  return 0;
}
