/*
 * Random walk on 10x10 array
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
  char coords[SIZE][SIZE], curr = 'A';
  int i, j, directions[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}, d;

  srand((unsigned) time(NULL));

  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      coords[i][j] = '.';
    }
  }

  printf("Random walk generating...\n\n");

  i = 0;
  j = 0;
  coords[i][j] = curr;

  while (curr < 'Z') {
    if ((i == 0 || coords[i - 1][j] != '.') && (i == SIZE - 1 || coords[i + 1][j] != '.') && (j == 0 || coords[i][j - 1] != '.') && (j == SIZE - 1 || coords[i][j + 1] != '.')) {
      break;
    }

    d = rand() % 4;
    
    if (0 <= i + directions[d][0] && i + directions[d][0] < SIZE) {
      if (0 <= j + directions[d][1] && j + directions[d][1] < SIZE) {
        if (coords[i + directions[d][0]][j + directions[d][1]] == '.') {
          i += directions[d][0];
	  j += directions[d][1];
	  curr++;
	  coords[i][j] = curr;
	}
      }
    }
  }

  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      printf("%c ", coords[i][j]);
    }
    printf("\n");
  }

  return 0;
}
