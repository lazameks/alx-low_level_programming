#include "main.h"
/**
 * _strdup - makes a duplicate of a str
 * @str: str to be duplicated
 *
 * Return: NULL or copied str
 */
char *_strdup(char *str)
{
	char *cpydstr;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	cpydstr = malloc(sizeof(char) * (i  + 1));

	if (cpydstr == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		cpydstr[j] = str[j];
	return (cpydstr);
}
