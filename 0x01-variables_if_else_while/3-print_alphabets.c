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
	int ch_1, ch_2;
	
	for (ch_1 = 'a'; ch_1 <= 'z'; ch_1++)
       	        putchar(ch_1);

	for (ch_2 = 'A'; ch_2 <= 'Z'; ch_2++)
		putchar(ch_2);
        putchar('\n');
	return (0);
}
