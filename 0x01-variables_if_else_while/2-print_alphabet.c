#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * print the alphabets in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

