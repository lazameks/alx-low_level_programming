#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Function that prints triangle of any size
 *
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= i - 1)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
