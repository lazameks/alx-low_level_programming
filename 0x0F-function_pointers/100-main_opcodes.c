#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry to print program opcode
 *
 * @argc: Number of argument must be two
 * @argv: arg varaibles
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	unsigned char *opcodes;
	int n, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodes = (unsigned char *)main;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf(" ");
		printf("%02x", opcodes[i]);
	}
	printf("\n");
	return (0);
}
