#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string in reverese
 *
 * @s: accepts string to be printed in reverse
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
