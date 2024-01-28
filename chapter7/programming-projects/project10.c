/*
 * Count the number of vowels (a, e, i, o, u)
 * in a sentence
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int cnt = 0;
  char c;

  printf("Enter a sentence: ");
  
  while (1) {
    c = getchar();
    
    if (c == 10) {
      break;
    }
    
    c = toupper(c);

    switch (c) {
      case 65:
      case 69:
      case 73:
      case 79:
      case 85:
        cnt++;
	break;
    }
  }

  printf("Your sentence contains %d vowels.\n", cnt);

  return 0;
}
