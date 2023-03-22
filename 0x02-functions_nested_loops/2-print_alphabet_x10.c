#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * return: void
 * prints ten times the alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	char i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
