#include <unistd.h>

/**
 * print_alphabet prints the letters of the 
 * alphabet
 */

int print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    return (write(1, alphabet, 26));
}
