#include "main.h"

/**
 * _memcpy - copies memory address
 * @dest: a specific mem to be coppied to
 * @src: the source to be coppied from
 * @n: the size of mem
 *
 * Return: always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
