#include "main.h"
#include <stdbool.h>

/**
 * _strspn - compares strings to find match
 * @s: main string
 * @accept: string to find match
 *
 * Return: initial_lenght
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int initial_lenght = 0;
	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);
	unsigned int i, j;

	for (i = 0; i < len1; i++)
	{
		bool found_match = false;

		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				found_match = true;
				break;
			}
		}
		if (found_match)
			initial_lenght++;
		else
			break;
	}
	return (initial_lenght);
}
