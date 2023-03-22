#include "main.h"

/**
 * _islower - Entry point that check 'c' for lower case
 *
 * c - store the value to checked
 * checks for lowercase character
 * Return: Always 0
 */
int _islower(int c)/* the protovariable */
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
