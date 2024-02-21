/*
 * Crap game
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
  char c;
  int win = 0, loss = 0;

  srand((unsigned) time(NULL));


  while (true) {
    if (play_game()) {
      win++;
      printf("You win!\n");
    } else {
      loss++;
      printf("You lose!\n");
    }

    printf("\nPlay again? ");
    while ((c = getchar()) == '\n');
    if (toupper(c) != 'Y') break;
    printf("\n");
  } 
  printf("Wins: %d Losses: %d\n", win, loss);

  return 0;
}

int roll_dice(void) {
  int dice1, dice2;
  
  dice1 = rand() % 6 + 1;
  dice2 = rand() % 6 + 1;

  return dice1 + dice2;
}

bool play_game(void) {
  int point, new_point;
  
  point = roll_dice();
  printf("You rolled: %d\n", point);

  if (point == 7 || point == 11) {
    return true;
  }

  if (point == 2 || point == 3 || point == 12) {
    return false;
  }

  printf("Your point is %d\n", point);

  while (true) {
    new_point = roll_dice();
    printf("You rolled: %d\n", new_point);

    if (new_point == point) {
      return true;
    }

    if (new_point == 7) {
      return false;
    }
  }
}
