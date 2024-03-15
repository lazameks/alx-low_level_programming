#include "main.h"

/**
 * print_number - prints intergers using putchar
 * @n: Number to be printed
 * Return: Null
 */

void print_number(int n)
{
	if (n != 0)
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
		}

		if (n < 100)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n < 1000 && n > 99)
		{
			_putchar(n / 100 + '0');
			n %= 100;
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n < 10000 && n > 999)
		{
			_putchar(n / 1000 + '0');
			n %= 1000;
			_putchar(n / 100 + '0');
			n %= 100;
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
	}
	else
		_putchar('0');
}
