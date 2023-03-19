#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes0
 * Print all single digit from starting from 0
 * with the use of putchar function only
 */
int main(void)
{
	int n;
	for (n = 0; n <= 9; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
