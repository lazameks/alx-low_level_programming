#include "main.h"

/**
 * print_most_numbers - print numbers
 *
 */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2' || '4')
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
