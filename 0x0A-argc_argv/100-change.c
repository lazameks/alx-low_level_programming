#include "main.h"

/**
 * main - prints the minimum num of coin
 * make change for amount of money
 * @argc: count number of arg
 * @argv: argument array
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int num, j, coin_num;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	coin_num = (0);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coin[j])
		{
			coin_num++;
			num -= coin[j];
		}
	}
	printf("%d\n", coin_num);
	return (0);
}
