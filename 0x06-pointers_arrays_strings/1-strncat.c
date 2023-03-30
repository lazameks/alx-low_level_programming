#include "main.h"

/**
 * _strncat - concatinate strings with controlled number of source char
 * @dest: the base string
 * @src: the controlled character
 * @n: source controller
 *
 * Return: Always dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
