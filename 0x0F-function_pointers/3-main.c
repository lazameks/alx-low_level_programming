#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry to program
 *
 * @argc: number of argument
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(a, b);

	printf("%d\n", result);
	return (0);
}
