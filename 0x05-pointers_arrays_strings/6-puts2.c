#include "main.h"

/**
 * puts2 - prints all the character of a string beginninf from the firdt
 * @str: character to be printed
 */
void puts2(char *str)
{
	int len = 0;
	int j = 0;
	char *s = str;
	int i;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	j = len - 1;
	for (i = 0; i <= j; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
