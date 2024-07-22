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
 * Skipping white spaces before beginning
 * Terminate when enter
 */
// int read_line(char str[], int n) {
//     int ch, i = 0;

//     while ((ch = getchar()) == ' ' || ch == '\t');

//     while (ch != '\n') {
//         if (i < n) {
//             str[i++] = ch;
//             ch = getchar();
//         }
//     }

//     str[i] = '\0';

//     return i;
// }

/**
 * No skipping white spaces before beginning
 * Terminate when first white-space
 */
// int read_line(char str[], int n) {
//     int ch, i = 0;

//     while (!isspace(ch = getchar())) {
//         if (i < n) {
//             str[i++] = ch;
//         }
//     }

//     str[i] = '\0';

//     return i;
// }

/**
 * No skipping white spaces before beginning
 * Terminate when enter
 * Then store the new-line character
 */
int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }

    str[i++] = '\n';
    str[i] = '\0';

    return i;
}