#include "main.h"

/**
 * _strchr - returns pointer to the first occurrence of the character
 * @s: the string character
 * @c: the desired starting point of the string character
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
