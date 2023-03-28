#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculate the lenght of string
 *
 * @s: placeholder for parsed str
 * Return: Always (len)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
