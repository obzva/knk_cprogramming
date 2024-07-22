#include <stdio.h>

#define MAXSIZE 100

// int count_spaces(const char s[]);
int count_spaces(const char *s);

int main(void) {
    char s[MAXSIZE + 1];

    printf("Enter a sentence: ");
    gets(s);

    printf("The sentence: %s\n", s);
    printf("Spaces in the sentence: %d\n", count_spaces(s));

    return 0;
}

/**
 * Using iteration on array of characters
 */
// int count_spaces(const char s[]) {
//     int count = 0;

//     for (int i = 0; s[i] != '\0'; i++) {
//         if (s[i] == ' ') count++;
//     }

//     return count;
// }

/**
 * Using pointer parameter
 * `const` doesn't prevent the function from modifying the pointer parameter `s`;
 * it's there to prevent the function from modifying what `s` points to.
 * And since `s` is a copy of the pointer that's passed to the function, incrementing `s` doesn't affect the original pointer.
 */
int count_spaces(const char *s) {
    int count = 0;

    while (*s != '\0') {
        if (*(s++) == ' ') count++;
    }

    return count;
}