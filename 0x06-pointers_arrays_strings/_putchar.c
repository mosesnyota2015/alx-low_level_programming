#include <unistd.h>

/**
 * _putchar - writes the passed character  to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * returns -1 if error occurs
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
