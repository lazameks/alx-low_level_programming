#include <stdio.h>
#include <stdlib.h>
/**
 * main - finds and prints the sum of all even numbers in the
 * fibonacci sequence that is less than 4000000
 *
 * Return: zero
 */

int main(void)
{
	long int previous, current, next, sumEven;

	previous = 1;
	current = 2;
	next = previous + current;
	sumEven = 2;

	while (next < 4000000)
	{
		next = previous + current;
		previous = current;
		current = next;

		if (next % 2 == 0)
			sumEven += next;
	}
	printf("%ld\n", sumEven);

	return (0);
}
