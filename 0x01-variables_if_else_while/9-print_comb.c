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

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
		{
			putchar(' ');
			continue;
		}
		else
		{
			putchar(',');
		}
		putchar(' ');
	}
	return (0);
}
