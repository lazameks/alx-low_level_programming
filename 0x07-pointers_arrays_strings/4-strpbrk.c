#include "main.h"

/**
 * _strpbrk - return the first occurrence
 * @s: string to be searched
 * @accept: the string used to search
 *
 * Return: always s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}
