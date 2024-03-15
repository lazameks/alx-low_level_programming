#include "main.h"

/**
 * print_number - prints intergers using putchar
 * @n: Number to be printed
 * Return: Null
 */

void print_number(int n)
{
	int i, divisor = 10;

	if (n != 0)
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
		}

		while ((n / divisor) > 9)
		{
			divisor *= 10;
		}

		if (n < 10)
			_putchar(n + '0');
		else
		{
			for (i = divisor; i >= 10 ; i /= 10)
			{
				if (i > 10)
				{
					_putchar(n / i + '0');
					n %= i;
				}
				else
				{
					_putchar(n / i + '0');
					_putchar(n % i + '0');
				}
			}
		}
	}
	else
		_putchar('0');
}
