/*
 * Enter a message
 * this will translate it with B1FF filter
 */

#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main(void)
{
  char message[MAX_SIZE], input;
  int i = 0;

  printf("Enter message: ");
  while ((input = getchar()) != '\n') {
    message[i] = toupper(input);
    i++;
  }

  printf("In B1FF-speak: ");
  for (int j = 0; j <= i; j++) {
    switch(message[j]) {
      case 'A':
	printf("%c", '4');
	break;
      case 'B':
	printf("%c", '8');
	break;
      case 'E':
	printf("%c", '3');
	break;
      case 'I':
	printf("%c", '1');
	break;
      case 'O':
	printf("%c", '0');
	break;
      case 'S':
	printf("%c", '5');
	break;
      default:
	printf("%c", message[j]);
	break;
    }
  }
  printf("!!!!!!!!!!\n");

  return 0;
}
