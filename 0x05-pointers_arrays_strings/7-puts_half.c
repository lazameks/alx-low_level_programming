#include "main.h"

/**
 * puts_half - print the second half of the character
 *
 * @str: character to be printed
 */
void puts_half(char *str)
{
	int i, j, k;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (len % 2 != 0)
	{
		for (j = (len + 1) / 2; str[j] != '\0'; j++)
			_putchar(str[j]);
		_putchar('\n');
	} else if (len % 2 == 0)
	{
		for (k = len / 2; str[k] != '\0'; k++)
			_putchar(str[k]);
		_putchar('\n');
	}
}
