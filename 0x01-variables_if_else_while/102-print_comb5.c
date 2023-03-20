#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 * prints all possible combinations of two two-digit numbers
 */
int main(void)
{
	int a,b,c,d,i,j;

	a = '0';
	for (a = '0'; a <= '9'; a++)
	{
		b = '0';
		for (b = '0'; b <= '8'; b++)
		{
			i = '0';
			if (a > '0')
				i = a;
			else
				continue;
			j = '0';
			if (b > '0')
				j = (b + 1);
			else
				continue;
			for (c = i; c <= '9'; c++)
			{
				for (d = j; d <= '9'; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == '9' && b == '8' && c == '9' && d == '9')
					{
						putchar('\n');
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
