#include "main.h"

/**
 * main - prints number of argument passed to it
 * @argc: holds the value of the number of args
 * @argv: argument variables
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
		return (0);
}
