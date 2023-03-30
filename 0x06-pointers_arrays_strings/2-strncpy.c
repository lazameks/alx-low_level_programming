#include "main.h"

/**
 * _strncpy - copies string from src to dest
 *
 * @dest: to be copied to
 * @src: to be copied from
 * @n: src control digit
 *
 * Return: Always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
