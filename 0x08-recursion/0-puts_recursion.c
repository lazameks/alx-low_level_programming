#include "main.h"
/**
 * _puts_recursion - printinf characters of string
 * @s: the string character
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		s = '\0';
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);

}
