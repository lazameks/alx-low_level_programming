#include "main.h"

/**
 * the_sqrt_recursion - find natural sqrt
 * @n: number to calculate the sqrt
 * @i: iterator
 *
 * Return: sqrt
 */
int the_sqrt_recursion(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (the_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: number to calculculate the squareroot of
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (the_sqrt_recursion(n, 0));
}
