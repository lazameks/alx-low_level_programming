#include "main.h"

/**
 * _abs - Entry point that checks n for abs value
 * @n: number to checked for abs value
 *
 * Return: Always the value of 'n'
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
