#include "main.h"
#include <stdio.h>

/**
 * swap_int - Sets the value of the integer pointed to by n to 98.
 * @a: Pointer a.
 * @b: Pointer b.
 *
 * Description: This function takes two pointers to an integer and
 * swaps the values of the two integers
 */
void swap_int(int *a, int *b)
{
int val_a, val_b;
val_a = *a;
val_b = *b;

*a = val_b;
*b = val_a;
}
