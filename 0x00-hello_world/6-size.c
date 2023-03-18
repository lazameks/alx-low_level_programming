#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf(stderr, "size of a char: %d byte(s)\n", sizeof(char));
	printf(stderr, "size of an int: %d byte(s)\n", sizeof(int));
	printf(stderr, "size of a long int: %d byte(s)\n", sizeof(long int));
	printf(stderr, "size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf(stderr, "size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
