#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * prints all possible different combinations of three digits
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = '0';
	for (i = '0'; i <= '7'; i++)
	{
		j = (i + 1);
		for (j = (i + 1); j <= '8'; j++)
		{
			k = (j + 1);
			for (k = (j + 1); k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
				{
					putchar('\n');
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
