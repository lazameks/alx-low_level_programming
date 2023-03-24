#include "main.h"

/**
 * _isupper - checks for upper cases
 *
 * @c: char
 *
 * Return: Always 1 if c is upper case
 * otherwise: returns 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
