#include "main.h"
/**
 * argstostr - concat a program argument each on a new line
 *
 * @ac: number of arguments
 * @av: argument strings
 *
 * Return: concatstr always
 */
char *argstostr(int ac, char **av)
{
	int i, j, char_num = 0, char_index = 0;
	char *concatstr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			char_num++;
	}
	char_num += ac;

	concatstr = malloc(sizeof(char) * char_num + 1);

	if (concatstr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concatstr[char_index] = av[i][j];
			char_index++;
		}
		if (av[i][j] == '\0')
			concatstr[char_index++] = '\n';
	}
	return (concatstr);
}
