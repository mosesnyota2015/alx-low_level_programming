#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign and prints a random number to int n
 * each time it executes
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	int n;

	
	n = i;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
