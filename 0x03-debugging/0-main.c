#include "main.h"
/**
 * main - prints if a num is positive , negative or zero
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



int main(void)
{
        int i;

        i = 0;
        positive_or_negative(i);

        return (0);
}