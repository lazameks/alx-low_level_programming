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

	for(n = '0'; n <= '9'; n++)
	{
		if (n == '9')
			putchar(n);
		else {
			putchar(n);
			putchar(',');
			putchar(' ');
		}
	}
	return 0;
}
