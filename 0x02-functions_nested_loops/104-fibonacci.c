#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the first 98 fibinacci number seperated by a comma
 *
 * Return: 0 always
 */

int main(void)
{
	unsigned long int previous, current, next;
	int i, counter = 0;

	previous = 1;
	current = 2;
	printf("%lu, ", previous);
	printf("%lu, ", current);
	for (i = 0; i < 97; i++)
	{
		next = previous + current;
		previous = current;
		current = next;
		counter++;
		if (counter == 96)
		{
			printf("%lu\n", next);
		}
		else
			printf("%lu, ", next);
	}
	return (0);
}
