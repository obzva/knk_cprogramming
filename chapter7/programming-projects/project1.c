/**
 * We can check the size of integer types with this code
 */

#include <stdio.h>

int main() {
    printf("Size of int: %zu bits\n", sizeof(int) * 8);    // to represent in bits, multiply 8          
    printf("Size of short int: %zu bits\n", sizeof(short int) * 8);
    printf("Size of long int: %zu bits\n", sizeof(long int) * 8);
    return 0;
}
