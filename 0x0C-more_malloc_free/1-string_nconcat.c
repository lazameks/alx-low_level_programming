#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concat string s1 and s2
 * @s1: first string
 * @s2: second string
 * @n: number of string to concat starting from s1
 *
 * Return: new_str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i, j;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	if (n >= strlen(s2))
		len = strlen(s1) + strlen(s2);
	else
		len = strlen(s1) + n;
	new_str = malloc(len * sizeof(char) + 1);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; (s2[j] != '\0' && j < n); j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	new_str[i] = '\0';

	return (new_str);
}
