#include "main.h"

/**
 * check_num - check argument for int
 * @nums: arg number to be checked
 *
 * Return: 0 or 1
 */
int check_num(char *nums)
{
	unsigned int i;

	i = 0;
	while (i < strlen(nums))
	{
		if (!isdigit(nums[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - sums arg int
 * @argc: count
 * @argv: arg var
 *
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int count, sum = 0, str_to_int;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
