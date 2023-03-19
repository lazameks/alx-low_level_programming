#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 * Print lowercase of alphabet
 * emit letter q and e
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		else
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
