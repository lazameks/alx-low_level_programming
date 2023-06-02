#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a backslash in a diagonal manner.
 * @n: the number of backslash to be printed
 *
 * Return: NULL always
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	i = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	_putchar('\n');
	}
}
