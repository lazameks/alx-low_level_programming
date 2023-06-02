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

	i = 0;
	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
