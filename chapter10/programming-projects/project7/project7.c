/*
 * Displays the number in seven-segment form
 */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_DIGITS 10

// External variables
int segments[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0 ,0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1}
};
char digits[3][MAX_DIGITS * 4];

// Prototypes
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
  char c;
  int position = 0;


  // initiate the digits array with clear function
  clear_digits_array();

  printf("Enter a number: ");
  while (position < MAX_DIGITS) {
    c = getchar();
    if (c == '\n') break;
    // store seven-segment display into a specified position
    if (isdigit(c)) process_digit((int) (c - 48), position++);
  }

  print_digits_array();
}

/*
 * clear_digits_array:
 *   store blank characters into all elements of the digits array
 */
void clear_digits_array(void) {
  int i, j;
  
  for (i = 0; i < 3; i++) {
    for (j = 0; j < MAX_DIGITS * 4; j++) {
      digits[i][j] = ' ';
    }
  }
}

/*
 * process_digit:
 *   store seven-segment representation of the digit into a specfied position in the array
 */
void process_digit(int digit, int position) {
  int s_s_repr[7];
  int i;

  for (i = 0; i < 7; i++) {
    s_s_repr[i] = segments[digit][i];
  }
  
  if (s_s_repr[0]) digits[0][4 * position + 1] = '_';
  if (s_s_repr[1]) digits[1][4 * position + 2] = '|';
  if (s_s_repr[2]) digits[2][4 * position + 2] = '|';
  if (s_s_repr[3]) digits[2][4 * position + 1] = '_';
  if (s_s_repr[4]) digits[2][4 * position] = '|';
  if (s_s_repr[5]) digits[1][4 * position] = '|';
  if (s_s_repr[6]) digits[1][4 * position + 1] = '_';
}

/*
 * print_digits_array:
 *   print digits in seven-segment form and exit
 */
void print_digits_array(void) {
  int i, j;
  
  for (i = 0; i < 3; i++) {
    for (j = 0; j < MAX_DIGITS * 4; j++) {
      printf("%c", digits[i][j]);
    }
    printf("\n");
  }

  exit(EXIT_SUCCESS);
}
