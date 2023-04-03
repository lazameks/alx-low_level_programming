#include "main.h"

/**
 * _memset - mimics the memset function
 * @s: the string pointer
 * @b: the value itself
 * @n: the size of the string
 *
 * Return: always s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
