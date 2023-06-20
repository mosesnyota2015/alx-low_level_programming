#include "main.h"

/**
 * main - Print "_putchar" followed by a new line.
 * Description: not allowed to use starndard libs.
 * Return: 0
 */

int main(void)
{
	char toprint[] = "_putchar";
	int i = 0;

	while (toprint[i] != '\0')
	{
		_putchar(toprint[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
