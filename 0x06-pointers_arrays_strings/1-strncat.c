#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat -  concatenates two strings.
 * Description - The program takes three inputs
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 * Return: The function returns char
 */
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
