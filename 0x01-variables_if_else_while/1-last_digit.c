#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{	int lstdg = abs(n % 10);
		printf("Last digit of %d is %d and is greater than 5\n", n,lstdg);
	} else if (n % 10 == 0)
	{
		int lstdg = abs(n % 10);
		printf("Last digit of %d is %d and is 0\n", n,lstdg);
	} else if (n % 10 < 6)
	{
		int lstdg = abs(n % 10);
		printf("Last digit of %d is %d and is less than 6\n", n,lstdg);
	}
	return (0);
}
