#include <stdio.h>

int main(void)
{
  char c;

  printf("Enter phone number: ");
  while (1) {
    c = getchar();
    if (c == '\n') break; // break the loop if enter key pressed 

    if (97 <= c && c <= 121) { // convert lowercase alphabets(a-y) into uppercase ones
      c -= 32;
    }

    if (65 <= c && c <= 89) { // convert uppercase alphabets(A-Y) into numbers
      if (c < 68) { // ABC
        printf("%d", 2);
      } else if (c < 71) { // DEF
        printf("%d", 3);
      } else if (c < 74) { // GHI
        printf("%d", 4);
      } else if (c < 77) { // JKL
        printf("%d", 5);
      } else if (c < 80) { // MNO
        printf("%d", 6);
      } else if (c < 84) { // PRS
        printf("%d", 7);
      } else if (c < 87) { // TUV
        printf("%d", 8);
      } else { // WXY
        printf("%d", 9);
      }
    } else { // nonalphabetic characters stay unchanged
      printf("%c", c);
    }
  }
  printf("\n");

  return 0;
}
