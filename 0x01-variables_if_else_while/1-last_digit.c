#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 * will print the last digit of the a rand num
 * greater than 5
 * less than 6
 * equall to 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{	int lstdg = (n % 10);

		printf("Last digit of %d is %d and is greater than 5\n", n, lstdg);
	} else if ((n % 10) == 0)
	{
		int lstdg = (n % 10);

		printf("Last digit of %d is %d and is 0\n", n, lstdg);
	} else if ((n % 10) < 6)
	{
		int lstdg = (n % 10);

		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstdg);
	}
	return (0);
}
