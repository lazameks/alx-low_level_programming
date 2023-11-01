#include "main.h"
/**
 * str_concat - concat two str together
 * @s1: the first string
 * @s2: the second string
 * Return: NULL or concatdstr id the cosde succeeds
 */
char *str_concat(char *s1, char *s2)
{
	char *concatdstr;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	concatdstr = malloc(sizeof(char) * (i + j + 1));
		if (concatdstr == NULL)
			return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		concatdstr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		concatdstr[i] = s2[j];
		i++;
		j++;
	}
	concatdstr[i] = '\0';
	return (concatdstr);
}
