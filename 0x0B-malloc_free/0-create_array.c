#include "main.h"
/**
 * create_array - creates and array of string
 * @size: specifies trhe number of characterto be arrayed
 * @c: char to assign
 * Return: pointer to array or NULL if car is NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
