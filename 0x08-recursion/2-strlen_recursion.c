#include "main.h"

/**
 * _strlen_recursion - returns the lenght of string
 * @s: string character
 *
 * Return: len
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);

	}
	return (len);
}
