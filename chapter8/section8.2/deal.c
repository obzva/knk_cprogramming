/*
 * Enter number of cards,
 * and this program will give you random cards
 */

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define NUMBER_SUITS 4
#define NUMBER_RANKS 13

int main(void)
{
  const char suits[NUMBER_SUITS] = {'c', 'd', 'h', 's'};
  const char ranks[NUMBER_RANKS] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
  
  bool in_hand[NUMBER_SUITS][NUMBER_RANKS] = {false};

  int number, suit, rank;

  srand((unsigned) time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &number);

  printf("Your hand:");
  while (number > 0) {
    suit = rand() % NUMBER_SUITS;
    rank = rand() % NUMBER_RANKS;
    if (!in_hand[suit][rank]) {
      in_hand[suit][rank] = true;
      number--;
      printf(" %c%c", ranks[rank], suits[suit]);
    }
  }

  printf("\n");

  return 0;
}
