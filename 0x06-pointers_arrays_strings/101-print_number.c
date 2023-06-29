#include "main.h"

/**
 * _putchar - prints an integer.
 * @c: input char.
 * Return: no return.
 */
void _putchar(char c)
{
putchar(c);
}

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
if (n < 0)
{
	_putchar('-');
	n = -n;
}

if (n / 10)
{
	print_number(n / 10);
}

_putchar('0' + n % 10);
}
