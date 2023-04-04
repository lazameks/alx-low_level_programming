#include "main.h"

/**
 * _strstr - find and return first occurrence of str substr
 * @haystack: the string to be searches
 * @needle: the string used to search
 *
 * Return: a substring or a NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
