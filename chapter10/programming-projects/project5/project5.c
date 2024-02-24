/*
 * Classifies a poker hand
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/*
 * External variables
 */
bool straight, flush, four, three;
int pairs;

/*
 * Prototypes
 */
void read_cards(int hand[][2]);
bool is_duplicate(int hand[][2], int rank, int suit, int cards_read);
void analyze_hand(int hand[][2]);
void sort(int hand[][2]);
void print_result(int hand[][2]);

/*
 * main:
 *   Calls read_cards, analyze_hand, and print_result repeatedly
 */
int main(void) {	
  int hand[NUM_CARDS][2];

  while (true) {
    read_cards(hand);
    analyze_hand(hand);
    print_result(hand);
  }
}

/*
 * read_cards:
 *   Reads the cards into the parameter hand;
 *   checks for bad cards and duplicate cards.
 */
void read_cards(int hand[][2]) {
  char ch, rank_ch, suit_ch;
  int rank, suit, cards_read = 0;
  bool bad_card;

  while (cards_read < NUM_CARDS) {
    bad_card = false;

    printf("Enter a card ([rank][suit]) : ");

    rank_ch = getchar();
    switch (rank_ch) {
      case '0':
	exit(EXIT_SUCCESS);
      case '2':
	rank = 0;
	break;
      case '3':
	rank = 1;
	break;
      case '4':
	rank = 2;
	break;
      case '5':
	rank = 3;
	break;
      case '6':
	rank = 4;
	break;
      case '7':
	rank = 5;
	break;
      case '8':
	rank = 6;
	break;
      case '9':
	rank = 7;
	break;
      case 't': 
      case 'T':
	rank = 8;
	break;
      case 'j':
      case 'J':
	rank = 9;
	break;
      case 'q':
      case 'Q':
	rank = 10;
	break;
      case 'k':
      case 'K':
	rank = 11;
	break;
      case 'a':
      case 'A':
	rank = 12;
	break;
      default:
	bad_card = true;
    }

    suit_ch = getchar();
    switch (suit_ch) {
      case 'c':
      case 'C':
        suit = 0;
	break;
      case 'd':
      case 'D':
        suit = 1;
	break;
      case 'h':
      case 'H':
        suit = 2;
	break;
      case 's':
      case 'S':
        suit = 3;
	break;
      default:
	bad_card = true;
    }

    while ((ch = getchar()) != '\n') {
      if (ch != ' ') bad_card = true;
    }

    if (bad_card) printf("Bad card; ignored.\n");
    else if (is_duplicate(hand, rank, suit, cards_read)) printf("Duplicate card; ignored\n");
    else {
      hand[cards_read][0] = rank;
      hand[cards_read][1] = suit;
      cards_read++;
    }
  }
}

/*
 * is_duplicate:
 *   Checks whether the current card is duplicate or not
 */
bool is_duplicate(int hand[][2], int rank, int suit, int cards_read) {
  int i;
  
  for (i = 0; i < cards_read; i++) {
    if (hand[i][0] == rank && hand[i][1] == suit) return true;
  }

  return false;
}

/*
 * analyze_hand:
 *   Determines whether the hand contains a straight, a flush, four-of-a-kind, and/or three-of-a-kind;
 *   determines the number of pairs;
 *   stores the results into the external variables straight, flush, four, three, and pairs.
 */
void analyze_hand(int hand[][2]) {
  int i, j;
  
  straight = false;
  flush = false;
  four = false;
  three = false;
  pairs = 0;

  // Sort the hand
  sort(hand);

  // Check flush
  for (i = 1; i < NUM_CARDS; i++) {
    if (hand[i][1] != hand[0][1]) break;
    if (i == NUM_CARDS - 1) flush = true;
  }

  // Check straight
  for (i = 1; i < NUM_CARDS; i++) {
    if (hand[i][0] != hand[i - 1][0] + 1 && !(hand[i][0] == 12 && hand[i - 1][0] == 3)) break;
    if (i == NUM_CARDS - 1) straight = true;
  }

  // Check four, three, or pairs
  {
    int cnt;
    for (i = 0; i < NUM_CARDS - 1; i++) {
      cnt = 1;
      for (j = i + 1; j < NUM_CARDS; j++) {
        if (i == j) continue;
        if (hand[j][0] == hand[i][0]) cnt++;
      }
      if (cnt == 4) {
	four = true;
	pairs--;
      } else if (cnt == 3) {
	three = true;
	pairs--;
      } else if (cnt == 2) pairs++;
    }
  }
}

/*
 * sort:
 *   Sort the hand in smaller rank order
 */
void sort(int hand[][2]) {
  int i, j, smallest, tmp_rank, tmp_suit;

  for (i = 0; i < NUM_CARDS; i++) {
    smallest = i;

    for (j = i + 1; j < NUM_CARDS; j++) {
      if (hand[j][0] < hand[smallest][0]) smallest = j;
    }

    tmp_rank = hand[i][0];
    tmp_suit = hand[i][1];
    hand[i][0] = hand[smallest][0];
    hand[i][1] = hand[smallest][1];
    hand[smallest][0] = tmp_rank;
    hand[smallest][1] = tmp_suit;
  }
}

/*
 * print_result:
 *   Prints the classification of the hand, based on the values of the external variables straight,
 *   flush, four, three, and pairs.
 */
void print_result(int hand[][2]) {
  if (straight && flush) {
    if (hand[0][0] == 8) printf("Royal flush");
    else printf("Straight flush");
  } else if (four) printf("Four of a kind");
  else if (three && pairs == 1) printf("Full house");
  else if (flush) printf("Flush");
  else if (straight) printf("Straight");
  else if (three) printf("Three of a kind");
  else if (pairs == 2) printf("Two pairs");
  else if (pairs == 1) printf("Pair");
  else printf("High card");

  printf("\n\n");
}
