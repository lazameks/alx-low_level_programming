#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_line - print line
 * @n: number of lines to be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	i = 1;
	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
