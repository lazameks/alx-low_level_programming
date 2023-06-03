#include <stdio.h>
#include "main.h"
/**
 * main - prints fizz buzz
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i == 100)
			printf("%d", i);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}