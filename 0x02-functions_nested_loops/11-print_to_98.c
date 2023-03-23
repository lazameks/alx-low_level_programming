#include "main.h"

/**
 * print_to_98 - Entry point that print from n to 98
 * @n: stores the number n
 *
 * Return: always void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
