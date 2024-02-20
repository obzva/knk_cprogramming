/*
 * Random walk on 10x10 array
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
  char coords[SIZE][SIZE];

  generate_random_walk(coords);

  print_array(coords);

  return 0;
}

void generate_random_walk(char walk[10][10]) {
  char curr = 'A';
  int i, j, directions[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}, d;

  srand((unsigned) time(NULL));

  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      walk[i][j] = '.';
    }
  }

  printf("Random walk generating...\n\n");

  i = 0;
  j = 0;
  walk[i][j] = curr;

  while (curr < 'Z') {
    if ((i == 0 || walk[i - 1][j] != '.') && (i == SIZE - 1 || walk[i + 1][j] != '.') && (j == 0 || walk[i][j - 1] != '.') && (j == SIZE - 1 || walk[i][j + 1] != '.')) {
      break;
    }

    d = rand() % 4;
    
    if (0 <= i + directions[d][0] && i + directions[d][0] < SIZE) {
      if (0 <= j + directions[d][1] && j + directions[d][1] < SIZE) {
        if (walk[i + directions[d][0]][j + directions[d][1]] == '.') {
          i += directions[d][0];
	  j += directions[d][1];
	  curr++;
	  walk[i][j] = curr;
	}
      }
    }
  }
}

void print_array(char walk[10][10]) {
  int i, j;

  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      printf("%c ", walk[i][j]);
    }
    printf("\n");
  }
}
