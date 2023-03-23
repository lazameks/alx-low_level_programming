#include "main.h"

/**
 * _isalpha - Entry point to check for if c is an alphabet
 * @c: parameter to be printed
 *
 * Return: Always 1 if it is alphabet and
 * 0 if othewise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
