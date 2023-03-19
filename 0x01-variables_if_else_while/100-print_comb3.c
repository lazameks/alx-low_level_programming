#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 * prints all possible different combinations of two digits
 */
int main(void)
{
	int i;
	int j;

	i = '0';
	for (i = '0'; i <= '8'; i++)
	{
		j = (i + 1);
		for (j = (i + 1); j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
			{
				putchar('\n');
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
