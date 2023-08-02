#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: the string character
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
