#include "main.h"

/**
 * print_number - prints intergers using putchar
 * @n: Number to be printed
 * Return: Null
 */

void print_number(int n)
{
	int i, divisor = 10;
	unsigned int store_n;

	if (n != 0)
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
		}

		store_n = n;

		while ((store_n / divisor) > 9)
		{
			divisor *= 10;
		}

		if (store_n < 10)
			_putchar(store_n + '0');
		else
		{
			for (i = divisor; i >= 10 ; i /= 10)
			{
				if (i > 10)
				{
					_putchar(store_n / i + '0');
					store_n %= i;
				}
				else
				{
					_putchar(store_n / i + '0');
					_putchar(store_n % i + '0');
				}
			}
		}
	}
	else
		_putchar('0');
}
