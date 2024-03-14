#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds and prints the largest prime factor of a given number
 * Return: 0 always
 */

int main(void)
{
	unsigned long int num, i;

	num = 612852475143;

	i = 2;
	while (num != 1)
	{
		if ((num % i) == 0)
		{
			num /= i;
		}
		else
			i++;
	}
	printf("%ld\n", i);

	return (0);
}
