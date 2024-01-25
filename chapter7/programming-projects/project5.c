#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int sum = 0;
  char c;

  printf("Enter a word: ");

  while (1) {
    c = getchar();

    if (c == '\n') {
      break;
    }

    c = toupper(c);
    switch (c) {
      case 65:
      case 69:
      case 73:
      case 76:
      case 78:
      case 79:
      case 83:
      case 84:
      case 85:
	sum += 1;
	break;
      case 68:
      case 71:
	sum += 2;
	break;
      case 66:
      case 67:
      case 77:
      case 80:
	sum += 3;
	break;
      case 70:
      case 72:
      case 86:
      case 87:
      case 89:
	sum += 4;
	break;
      case 75:
	sum += 5;
	break;
      case 74:
      case 88:
	sum += 8;
	break;
      case 81:
      case 90:
	sum += 10;
	break;
    }
  }

  printf("Scrabble value: %d\n", sum);

  return 0;
}
