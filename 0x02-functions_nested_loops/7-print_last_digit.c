#include "main.h"

/**
 * print_last_digit - Entry point for last digit of a number
 * @i: stores the remainder of the number i
 *
 * Return: Alwaysm 'k'
 * prints last digit
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	return (k);
}
