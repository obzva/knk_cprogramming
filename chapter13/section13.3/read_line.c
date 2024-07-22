#include <stdio.h>
#include <ctype.h>

#define MAXSIZE 100

int read_line(char str[], int n);

int main(void) {
    char sentence[MAXSIZE + 1];
    int i = MAXSIZE;

    printf("%d\n", read_line(sentence, i));
    printf("%s\n", sentence);

    return 0;
}

/**
 * No skipping white spaces before beginning
 * Terminate when enter
 */
int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }

    str[i] = '\0';

    return i;
}