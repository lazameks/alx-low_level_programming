#include <stdio.h>
#include <conio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %2d byte(s)", sizeof(char));
	printf("size of a int: %2d byte(s)", sizeof(int));
	printf("size of a long int: %2d byte(s)", sizeof(long int));
	printf("size of a long long int: %2d byte(s)", sizeof(long long int));
	printf("size of a float: %2d byte(s)", sizeof(float));
	return (0);
}
