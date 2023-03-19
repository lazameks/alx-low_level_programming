#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Prints all possible combination of single digit
 * seperated by comma
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
