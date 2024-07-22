#include <stdio.h>
#include <string.h>

#define SIZE1 100
#define SIZE2 10

int main(void) {
    char str1[SIZE1 + 1], str2[SIZE2 + 1];

    printf("Enter a sentence: ");
    gets(str1);

    // `strcpy` has no way to check that the string pointed to by src
    // will actually fit in the array pointed to by dst
    // strcpy(str2, str1);

    // more safe way to copy string but strncopy doens't leave a terminating '\0' if the src is longer thant the dst
    // strncpy(str2, str1, sizeof(str2) - 1);

    // this is a safer way to use strncpy
    strncpy(str2, str1, sizeof(str2) - 1);
    str2[sizeof(str2) - 1] = '\0';

    printf("Copied sentence: %s\n", str2);

    return 0;
}