#include "main.h"

/**
 * print_sign - Entry point to check code sign
 * @n: charecter to be checked for signage
 *
 * Return: Always 1 if n is + and
 * 0 id n is -
 * print + if n is + and
 * prints -mif n is -
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	} else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
