#include "main.h"
#include <stdio.h>
/**
 * print_square - prints # in a aquare like manner
 * @size: is the lenght and width of the square
 *
 * Return: void always
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		i = 0;
		for (i = 0; i < size; i++)
		{
			j = 0;
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
