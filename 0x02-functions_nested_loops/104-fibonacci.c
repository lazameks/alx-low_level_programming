#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the first 98 fibinacci number seperated by a comma
 *
 * Return: 0 always
 */

int main(void)
{
	long int previous, current, next;
	int i, counter = 0;

	previous = 1;
	current = 2;
	printf("%ld, ", previous);
	printf("%ld, ", current);
	for (i = 0; i < (98 - 2); i++)
	{
		next = previous + current;
		previous = current;
		current = next;
		counter++;
		if (counter == 96)
		{
			printf("%ld\n", next);
		}
		else
			printf("%ld, ", next);
	}
	return (0);
}
