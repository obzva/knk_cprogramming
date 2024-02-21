/*
 * Printing nxn magic square
 */

#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
  int n, row, col;

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

  create_magic_square(n, A);

  print_magic_square(n, A);

  return 0;
}


void create_magic_square(int n, char magic_square[n][n]) {
  int row = 0, col = n / 2, cnt = 0;

  magic_square[row][col] = cnt + 1;
  cnt++;
  
  while (cnt < n * n) {
    if (!magic_square[(row - 1 + n) % n][(col + 1) % n]) {
      row = (row - 1 + n) % n;
      col = (col + 1) % n;
    } else {
      row = (row + 1) % n;
    }

    magic_square[row][col] = cnt + 1;
    cnt++;
  }
}


void print_magic_square(int n, char magic_square[n][n]) {
  int row, col;

  printf("\n");
  for (row = 0; row < n; row++) {
    for (col = 0; col < n; col++) {
      printf("%d", magic_square[row][col]);
      printf("%c", col == n -1 ? '\n' : '\t');
    }
  }
}
